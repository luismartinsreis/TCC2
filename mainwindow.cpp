#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <cmath>
#include <algorithm>
#include <array>
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string>
#include <windows.h>
#include <time.h>
#include <myo/myo.hpp>
#include <myo/cxx/Pose.hpp>

#include <qwt_plot.h>
#include <qwt_plot_grid.h>
#include <qwt_plot_curve.h>

#include <QDebug>
#include <QTimer>
#include <QFileDialog>
#include <QMessageBox>
#include <QFile>
#include <QMap>
#include <QThread>
#include <QTime>
#include <QQuaternion>
#include <QElapsedTimer>
#include <QShortcut>
#include <QProcess>

#define GESTURE_CAPTURE_TIME_MILISECONDS 1500
#define SVM_TRAIN   "/libsvm-3.21/windows/svm-train.exe "
#define SVM_SCALE   "/libsvm-3.21/windows/svm-scale.exe "
#define SVM_PREDICT "/libsvm-3.21/windows/svm-predict.exe "
#define EASY_PYTHON "/libsvm-3.21/tools/easy.py "
using namespace std;

bool runStatus;
bool myoStatus;

const double CntlFreq = 100.0;
double period = 1/CntlFreq;
double plotTime = 5;
int maxFr = CntlFreq * plotTime;

__int64 freq;
__int64 cnt;
int frameNum;
double last_frame = 0;
__int64 first_get = 0;
unsigned int cnt_get = 0;


bool saveFlag = false;
bool training = false;
ofstream fid;
ifstream fid1;
QString fileComplete, fileCompileComplete;
QFile libsvmFile;


QString strOut;
std::array<double, 8> emgSamplesD;
std::array<double, 4> accSamplesD;
std::array<double, 4> gyroSamplesD;
std::array<double, 4> magnetSamplesD;

float pitch ,  roll , yaw;

QString gesture = "Desconhecido";
myo::Pose::Type gestoTipo = myo::Pose::unknown;

QMap<myo::Pose::Type,QString>* gesturePNGMap = new QMap<myo::Pose::Type,QString>;
QMap<int,QString>* gestureGIFMap = new QMap<int,QString>;



double emg1, emg2, emg3, emg4, emg5, emg6, emg7, emg8;
double accX, accY, accZ;
double gyroX, gyroY, gyroZ;
double magnetX, magnetY, magnetZ, magnetW;
QVector<double> data_plotEmg1, data_plotEmg2, data_plotEmg3, data_plotEmg4;
QVector<double> data_plotEmg5, data_plotEmg6, data_plotEmg7, data_plotEmg8;
QVector<double> data_plotAccX, data_plotAccY, data_plotAccZ;
QVector<double> data_plotGyroX, data_plotGyroY, data_plotGyroZ;

class DataCollector : public myo::DeviceListener
{
public:
    DataCollector()
        : emgSamples(){

    }

    // onUnpair() is called whenever the Myo is disconnected from Myo Connect by the user.
    void onUnpair(myo::Myo* myo, uint64_t timestamp)
    {
        // We've lost a Myo.        // Let's clean up some leftover state.
        emgSamples.fill(0);
    }

    // onEmgData() is called whenever a paired Myo has provided new EMG data, and EMG streaming is enabled.
    void onEmgData(myo::Myo* myo, uint64_t timestamp, const int8_t* emg)
    {
        for (int i = 0; i < 8; i++) {
            emgSamples[i] = emg[i];
            emgSamplesD[i] = (double) emg[i];
        }
    }


    void onOrientationData(myo::Myo *myo, uint64_t timestamp, const myo::Quaternion< float > &rotation){

        pitch = 1;
        yaw = 1;
        roll = 1;
        magnetSamplesD[0] = (double) rotation.x();
        magnetSamplesD[1] = (double) rotation.y();
        magnetSamplesD[2] = (double) rotation.z();
        magnetSamplesD[3] = (double) rotation.w();


        //QQuaternion *test = new QQuaternion(rotation.w(),rotation.x(),rotation.y(),rotation.z());
        // test->getEulerAngles(&pitch,&yaw,&roll);
        // qDebug()<<"X: "<<rotation.x()<<" Y: "<<rotation.y()<<" Z: "<<rotation.z()<<" W: "<<rotation.w();

        // qDebug()<<"Valores pela conversao implicita: roll: "<<roll<<" pitch: "<<pitch<<" yaw: "<<yaw;

        //this->toEullerAngles(rotation);
        //delete test;
    }

    void toEullerAngles(const myo::Quaternion <float> &quat){
        using std::atan2;
        using std::asin;
        using std::sqrt;
        using std::max;
        using std::min;
        // Calculate Euler angles (roll, pitch, and yaw) from the unit quaternion.
        //        float roll = atan2(2.0f * (quat.w() * quat.x() + quat.y() * quat.z()),
        //                           1.0f - 2.0f * (quat.x() * quat.x() + quat.y() * quat.y()));
        //        float pitch = asin(max(-1.0f, min(1.0f, 2.0f * (quat.w() * quat.y() - quat.z() * quat.x()))));
        //        float yaw = atan2(2.0f * (quat.w() * quat.z() + quat.x() * quat.y()),
        //                        1.0f - 2.0f * (quat.y() * quat.y() + quat.z() * quat.z()));

        //  qDebug()<<"Valores pela fórmula: roll: "<<roll<<" pitch: "<<pitch<<" yaw: "<<yaw;
        //        // Convert the floating point angles in radians to a scale from 0 to 18.
        //        roll_w = static_cast<int>((roll + (float)M_PI)/(M_PI * 2.0f) * 18);
        //        pitch_w = static_cast<int>((pitch + (float)M_PI/2.0f)/M_PI * 18);
        //        yaw_w = static_cast<int>((yaw + (float)M_PI)/(M_PI * 2.0f) * 18);
    }

    void onGyroscopeData(myo::Myo *myo, uint64_t timestamp, const myo::Vector3< float > &gyro){

        gyroSamplesD[0] = (double) gyro.x();
        gyroSamplesD[1] = (double) gyro.y();
        gyroSamplesD[2] = (double) gyro.z();
        gyroSamplesD[3] = (double) gyro.magnitude();
    }


    // There are other virtual functions in DeviceListener that we could override here, like onAccelerometerData().
    // For this example, the functions overridden above are sufficient.
    void onAccelerometerData(myo::Myo* myo, uint64_t timestamp, const myo::Vector3<float> &accel)
    {
        accSamplesD[0] = (double) accel.x();
        accSamplesD[1] = (double) accel.y();
        accSamplesD[2] = (double) accel.z();
        accSamplesD[3] = (double) accel.magnitude();
    }


    void onPose (myo::Myo* myo, uint64_t timestamp , myo::Pose pose){


        ///Gestos myo  padrão
        //        rest          = libmyo_pose_rest,
        //        fist          = libmyo_pose_fist,
        //        waveIn        = libmyo_pose_wave_in,
        //        waveOut       = libmyo_pose_wave_out,
        //        fingersSpread = libmyo_pose_fingers_spread,
        //        doubleTap     = libmyo_pose_double_tap,
        //        unknown

        gestoTipo = pose.type();
        switch (pose.type()) {
        case myo::Pose::rest:
            gesture= "Repouso";

            break;
        case myo::Pose::fist:
            gesture= "Mão Fechada";
            break;
        case myo::Pose::waveIn:
            gesture= "Mão para dentro";
            break;
        case myo::Pose::waveOut:
            gesture= "Mão para fora";
            break;
        case myo::Pose::fingersSpread:
            gesture= "Mão aberta";
            break;
        case myo::Pose::doubleTap:
            gesture= "Duplo click com dedo";
            break;
        default:
            gesture= "Gesto desconhecido";
            break;
        }


    }


    void print()
    {
        //qDebug() << '\r';
        for (size_t i = 0; i < emgSamples.size(); i++)
        {
            ostringstream oss;
            oss << static_cast<int>(emgSamples[i]);
            string emgString = oss.str();
            QString qemgString = QString::fromStdString(emgString);
            QString qbuffStr =  QString::fromStdString(std::string(4 - emgString.size(), ' '));
            qDebug() << '[' << qemgString <<  qbuffStr << ']';
        }
    }


    std::array<double, 8> returnEMGDouble()
    {
        return  emgSamplesD;
    }

    std::array<double, 4> returnACCDouble()
    {
        return  accSamplesD;
    }

    std::array<double, 4> returnGYRODouble()
    {
        return  gyroSamplesD;
    }

    std::array<double,4> returnMAGNETDouble(){
        return magnetSamplesD;
    }

    void plot()
    {

    }

    std::array<int8_t, 8> emgSamples;               // The values of this array is set by onEmgData() above.
    std::array<double, 8> emgSamplesD;               // The values of this array is set by onEmgData() above.
    std::array<double, 4> accSamplesD;
    std::array<double, 4> gyroSamplesD;
    std::array<double, 4> magnetSamplesD;
};


DataCollector collector;
myo::Hub hub("com.example.emg-data-sample");
//myo::Hub hub;



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

  ui->setupUi(this);
    ///
    svmTrain = new QProcess(this);
    svmPredict = new QProcess(this);

    connect(svmTrain, SIGNAL(readyReadStandardOutput()),this, SLOT(onReadReadyStdoutTrain()));
    connect(svmPredict, SIGNAL(readyReadStandardOutput()),this, SLOT(onReadReadyStdoutPredict()));
    ui->m_typeComboBox->setCurrentIndex(0);

    m_recordTime = new QTimer(this);
    m_recordTime->setSingleShot(true);
    // Configura validadores
    ui->m_kernelCrossLineEdit->setValidator( new QIntValidator(0, 100, this) );
    ui->m_kernelDegreeLineEdit->setValidator( new QIntValidator(0, 100, this) );
    ui->m_kernelCacheLineEdit->setValidator( new QIntValidator(0, 1000, this) );
    ui->m_kernelGammaLineEdit->setValidator( new QDoubleValidator(0, 1,30, this) );
    ui->m_kernelCoefLineEdit->setValidator( new QDoubleValidator(0, 1,6, this) );
    ui->m_kernelCostLineEdit->setValidator( new QDoubleValidator(0, 1,6, this) );
    ui->m_kernelNuLineEdit->setValidator( new QDoubleValidator(0, 1,6, this) );
    ui->m_kernelEpsilonLineEdit->setValidator( new QDoubleValidator(0, 1,6, this) );

    ui->m_progressBar->setStyleSheet("QProgressBar::chunk {background-color: #05B8CC; width: 20px;}");
    ui->m_progressBar->setAlignment(Qt::AlignCenter);
    ui->m_progressBar->setValue(0);
    ui->m_progressBar->setRange(0,GESTURE_CAPTURE_TIME_MILISECONDS/4);

    // connect(ui->m_slider, SIGNAL(valueChanged(int)),ui->m_progressBar,SLOT(setValue(int)));

    new QShortcut(QKeySequence(Qt::Key_Space), this, SLOT(recordGesture()));

    ui->m_progressBar->hide();
    m_registerCounter =1;
    ui->m_sessionLabel->setText(trUtf8("Registro nº: %1").arg(QString::number(m_registerCounter)));

    ui->poseFrame->setFrameStyle(QFrame::StyledPanel);
    ///< Iniciando mapa de imagens
    gesturePNGMap->insert(myo::Pose::rest,QString(":/repouso.png"));
    gesturePNGMap->insert(myo::Pose::fist, QString(":/make-fist.svg"));
    gesturePNGMap->insert(myo::Pose::fingersSpread, QString(":/spread-fingers.svg"));
    gesturePNGMap->insert(myo::Pose::waveIn, QString(":/wave-left.svg"));
    gesturePNGMap->insert(myo::Pose::waveOut, QString(":/wave-right.svg"));

    //gesturePNGMap->insert(myo::Pose::rest,QString(":/repouso.png"));

    //    gestureGIFMap->insert(0, QString("/img/wave-left.svg"));
    gestureGIFMap->insert(0, QString("/img/repouso.gif"));
    gestureGIFMap->insert(1, QString("/img/maoFechada.gif"));
    gestureGIFMap->insert(2, QString("/img/maoDentro.gif"));
    gestureGIFMap->insert(3, QString("/img/maoFora.gif"));
    gestureGIFMap->insert(4, QString("/img/maoAberta.gif"));

    //ui->poseFrame->setStyleSheet("QFrame{ background-image: url(:/img/repouso.png); background-repeat: repeat;}");

    //creation of tables of your data
    data_time = new QVector<double>;
    data_plotTime = new QVector<double>;       //only cntlfreq*10 samples for plotting
    data_emg1 = new QVector<double>;
    data_emg2 = new QVector<double>;
    data_emg3 = new QVector<double>;
    data_emg4 = new QVector<double>;
    data_emg5 = new QVector<double>;
    data_emg6 = new QVector<double>;
    data_emg7 = new QVector<double>;
    data_emg8 = new QVector<double>;

    data_accX = new QVector<double>;
    data_accY = new QVector<double>;
    data_accZ = new QVector<double>;

    data_gyroX = new QVector<double>;
    data_gyroY = new QVector<double>;
    data_gyroZ = new QVector<double>;

    data_magnetX = new QVector<double>;
    data_magnetY = new QVector<double>;
    data_magnetZ = new QVector<double>;
    data_magnetW = new QVector<double>;

    data_plotTime->fill(0,maxFr);
    for(int i=1; i < maxFr; i++)
        data_plotTime->replace(i, data_plotTime->at(i-1) + (1/CntlFreq));

    //
    runStatus = false;
    myoStatus = false;

    //setup timer
    timer = new QTimer(this);
    timer->setInterval(1);     //originally 40



    //initialize the plot area
    init_qwtPlot();

    //    //setup timer
    //    timer = new QTimer(this);
    //    timer->setInterval(20);     //originally 40


    //get frequency of CPU
    frameNum = 0;
    QueryPerformanceFrequency((LARGE_INTEGER *) &freq);
    qDebug() << trUtf8("Frequência do Processador: " )<< freq;
    QueryPerformanceCounter( (LARGE_INTEGER*) &first_get);

    connect(ui->openCloseButton, SIGNAL(clicked()), SLOT(onOpenCloseButtonClicked()));
    // connect(ui->saveFileButton, SIGNAL(clicked()), SLOT(onSaveFileButtonClicked()));
    connect(ui->fileDirectoryButton, SIGNAL(clicked()), SLOT(onFileDirectoryButtonClicked() ));
    connect(ui->m_recordGestureButton,SIGNAL(clicked(bool)),this,SLOT(recordGesture()));
    connect(timer, SIGNAL(timeout()), SLOT(onReadyRead()));

    //connect(ui->m_recordTimer,SIGNAL(clicked(bool)),this,SLOT(recordWithTimer()));
    connect(m_recordTime,SIGNAL(timeout()),this,SLOT(stopRecording()));
    connect(ui->m_progressBar,SIGNAL(valueChanged(int)),ui->m_progressBar,SLOT(update()));
    connect(ui->m_gestureTrainComboBox,SIGNAL(currentIndexChanged(int)),this,SLOT(changeGesture(int)));
    connect(ui->m_typeComboBox,SIGNAL(currentIndexChanged(int)),this,SLOT(changeDataBaseType(int)));

    connect(ui->m_callSVMButton,SIGNAL(clicked(bool)),this,SLOT(executeTraining()));
    connect(ui->classifierfileDirectoryButton,SIGNAL(clicked(bool)),this,SLOT(loadTrainingFile()));
    connect(ui->modelfileDirectoryButton,SIGNAL(clicked(bool)),this,SLOT(saveModelFile()));


    connect(ui->m_svmTypeCombobox,SIGNAL(currentIndexChanged(int)),this,SLOT(onSVMTypeChanged(int)));
    connect(ui->m_kernelCombobox,SIGNAL(currentIndexChanged(int)),this,SLOT(onKernelTypeChanged(int)));

    connect(ui->modelPredictFileDirectoryButton,SIGNAL(clicked(bool)),this,SLOT(loadModelFile()));
    connect(ui->testFileDirectoryButton,SIGNAL(clicked(bool)),this,SLOT(loadTetstFile()));
    connect(ui->predictFileDirectoryButton,SIGNAL(clicked(bool)),this,SLOT(savePredictModel()));




    connect(ui->m_classifierSVMButton,SIGNAL(clicked(bool)),this,SLOT(onClassify()));

    connect(ui->m_clearResultsButton,SIGNAL(clicked(bool)),ui->console2,SLOT(clear()));
    connect(ui->m_clearTrainButton,SIGNAL(clicked(bool)),ui->console1,SLOT(clear()));

    //    //configura estado incial do form de treinamento
    ui->m_kernelCostLineEdit->setEnabled(true);
    ui->m_kernelNuLineEdit->setEnabled(false);

    ui->m_kernelCoefLineEdit->setEnabled(false);
    ui->m_kernelGammaLineEdit->setEnabled(false);
    ui->m_kernelDegreeLineEdit->setEnabled(false);



    QDir dir(".");
    gestureAnimation = new QMovie(dir.absolutePath()+ gestureGIFMap->value(0));
    ui->m_gestureGif->setMovie(gestureAnimation);
    gestureAnimation->setScaledSize(ui->m_gestureGif->size());
    gestureAnimation->setSpeed(300);

    connect(ui->m_tabForm,SIGNAL(currentChanged(int)),this->gestureAnimation,SLOT(stop()));
    //gestureAnimation->start();

}

void MainWindow::onReadReadyStdoutTrain(){

    ui->console1->append(QString(svmTrain->readAllStandardOutput()).toUtf8().constData());

}
void MainWindow::onReadReadyStdoutPredict(){

    ui->console2->append(QString(svmPredict->readAllStandardOutput()).toUtf8().constData());

}

void MainWindow::onClassify(){
    QDir dir(".");

    QStringList parameters;
    parameters <<m_testSVMFile<<m_modelSVMFile<<m_predictSVMFile;
    svmPredict->start(dir.absolutePath().append(SVM_PREDICT),parameters );
}

void MainWindow::executeTraining(){
    /*
 -s svm_type : set type of SVM (default 0)
    0 -- C-SVC		(multi-class classification)
    1 -- nu-SVC		(multi-class classification)
    2 -- one-class SVM
    3 -- epsilon-SVR	(regression)
    4 -- nu-SVR		(regression)
-t kernel_type : set type of kernel function (default 2)
    0 -- linear: u'*v
    1 -- polynomial: (gamma*u'*v + coef0)^degree
    2 -- radial basis function: exp(-gamma*|u-v|^2)
    3 -- sigmoid: tanh(gamma*u'*v + coef0)
    4 -- precomputed kernel (kernel values in training_set_file)
-d degree : set degree in kernel function (default 3)
-g gamma : set gamma in kernel function (default 1/num_features)
-r coef0 : set coef0 in kernel function (default 0)
-c cost : set the parameter C of C-SVC, epsilon-SVR, and nu-SVR (default 1)
-n nu : set the parameter nu of nu-SVC, one-class SVM, and nu-SVR (default 0.5)
-p epsilon : set the epsilon in loss function of epsilon-SVR (default 0.1)
-m cachesize : set cache memory size in MB (default 100)
-e epsilon : set tolerance of termination criterion (default 0.001)
-h shrinking : whether to use the shrinking heuristics, 0 or 1 (default 1)
-b probability_estimates : whether to train a SVC or SVR model for probability estimates, 0 or 1 (default 0)
-wi weight : set the parameter C of class i to weight*C, for C-SVC (default 1)
-v n: n-fold cross validation mode
-q : quiet mode (no outputs)
*/


    QStringList  parameters;

    parameters<<"-s"<<QString::number(ui->m_svmTypeCombobox->currentIndex());

    parameters<<"-t"<<QString::number(ui->m_kernelCombobox->currentIndex());

    if(ui->m_kernelDegreeLineEdit->isEnabled() && ui->m_kernelDegreeLineEdit->text()!=NULL)
        parameters<<"-d"<<QString::number(ui->m_kernelDegreeLineEdit->text().toFloat());

    if(ui->m_kernelGammaLineEdit->isEnabled() && ui->m_kernelGammaLineEdit->text()!=NULL)
        parameters<<"-g"<<QString::number(ui->m_kernelGammaLineEdit->text().toFloat());

    if(ui->m_kernelCoefLineEdit->isEnabled() && ui->m_kernelCoefLineEdit->text()!=NULL)
        parameters<<"-r"<<QString::number(ui->m_kernelCoefLineEdit->text().toFloat());

    if(ui->m_kernelCostLineEdit->isEnabled() && ui->m_kernelCostLineEdit->text()!=NULL)
        parameters<<"-c"<<QString::number(ui->m_kernelCostLineEdit->text().toFloat());

    if(ui->m_kernelNuLineEdit->isEnabled() && ui->m_kernelNuLineEdit->text()!=NULL)
        parameters<<"-n"<<QString::number(ui->m_kernelNuLineEdit->text().toFloat());

    if(ui->m_kernelCacheLineEdit->text()!=NULL)
        parameters<<"-m"<<QString::number(ui->m_kernelCacheLineEdit->text().toFloat());

    if(ui->m_kernelEpsilonLineEdit->text()!=NULL)
        parameters<<"-e"<<QString::number(ui->m_kernelEpsilonLineEdit->text().toFloat());

    if(ui->m_shrinkCheckBox->isChecked())
        parameters<<"-h"<<QString::number(1);

    if(ui->m_probabilityCheckBox->isChecked())
        parameters<<"-b"<<QString::number(1);

    if(ui->m_kernelCrossLineEdit->text()!=NULL)
        parameters<<"-v"<<QString::number(ui->m_kernelCrossLineEdit->text().toFloat());

    parameters<<parameters<<m_trainSVMFile<<m_modelSVMFile;
    QDir dir(".");

    svmTrain->setReadChannel(QProcess::StandardOutput);
    svmTrain->setProcessChannelMode(QProcess::MergedChannels);

    svmTrain->start( dir.absolutePath().append(SVM_TRAIN),parameters);






}

void MainWindow::changeDataBaseType(int index){

    this->type = index;
    if(libsvmFile.isOpen()){
        libsvmFile.flush();
        libsvmFile.close();
    }
    fillCompleteFileName();
}

void MainWindow::onOpenCloseButtonClicked()
{
    if(myoStatus == false)
    {
        try
        {
            //myo::Hub hub("com.example.emg-data-sample");
            //hub("com.example.emg-data-sample");
            qDebug() << trUtf8("Procurando o Myo...");

            myo::Myo* myo = hub.waitForMyo(1000);
            // If waitForMyo() returned a null pointer, we failed to find a Myo, so exit with an error message.
            if (!myo)
            {
                qDebug() << trUtf8("Impossível encontrar o Myo!");
            }
            qDebug() << trUtf8("Conectando ao Myo armband!");

            // Next we enable EMG streaming on the found Myo.
            myo->setStreamEmg(myo::Myo::streamEmgEnabled);

            // Next we construct an instance of our DeviceListener, so that we can register it with the Hub.
            //DataCollector collector;
            //qDebug() << "jim1!";
            hub.addListener(&collector);
            //qDebug() << "jim2";

            // Finally we enter our main loop.
            /*
            while (1)
            {
                // In each iteration of our main loop, we run the Myo event loop for a set number of milliseconds.
                // In this case, we wish to update our display 50 times a second, so we run for 1000/20 milliseconds.
                hub.run(50);
                collector.print();
                //collector.plot();
                //emgSamplesD = collector.returnEMGDouble();
                //plotEMG();
            }
            */
        }
        catch (const std::exception& e)
        {
            qDebug() << "Error: " << e.what() ;
        }
        myoStatus = true;
    }

    //If using polling mode, we need a QTimer
    if (runStatus == false)
    {
        qDebug("Programa Iniciado!");
        runStatus = true;

        frameNum = 0;
        cnt_get = 0;
        QueryPerformanceCounter( (LARGE_INTEGER*) &first_get);
        last_frame = first_get;

        timer->start();

        ui->openCloseButton->setText(trUtf8("Parar Myo"));
        ui->openCloseButton->setStyleSheet("*{ background-color: rgb(255,0,0); color: black }");
    }
    else
    {
        runStatus = false;
        timer->stop();
        qDebug()<<trUtf8("O Programa Parou!");
        ui->openCloseButton->setText(trUtf8("&Iniciar Myo"));
        ui->openCloseButton->setStyleSheet("*{  background-color: #05B8CC; color: white }");
    }


}

void MainWindow::onReadyRead()
{
    QueryPerformanceCounter((LARGE_INTEGER *) &cnt);
    hub.run(5);        //hub.run(10) : 100 Hz   //hub.run(50) : 50 Hz
    if( ((double)(cnt - first_get) / freq) >= period*(cnt_get+1) )
    {



        emgSamplesD = collector.returnEMGDouble();
        accSamplesD = collector.returnACCDouble();
        gyroSamplesD = collector.returnGYRODouble();
        magnetSamplesD = collector.returnMAGNETDouble();

        ui->poseFrame->setFrameStyle(QFrame::StyledPanel);
        ui->myoGestureLabel->setText(gesture);
        ui->poseFrame->setStyleSheet("*{ border-image: stretch; background-image: url("+gesturePNGMap->value(gestoTipo)+");background-repeat: repeat;}");
        ui->poseFrame->show();
        //Salva em arquivo o streaming de dados recebido do myo


        this->featureToLibsvmFormat();


        plotDataChannels();
        last_frame = cnt;
        cnt_get++;
        frameNum++;
    }
}

void MainWindow::featureToLibsvmFormat(){



    if(training & runStatus){


        ui->m_progressBar->setValue(ui->m_progressBar->value()+50);
        ui->m_progressBar->update();


        if(!libsvmFile.isOpen())
            libsvmFile.open(QIODevice::Append|QIODevice::ReadWrite | QIODevice::Text);

        QTextStream feature(&libsvmFile);

        feature<<ui->m_gestureTrainComboBox->currentIndex()<<" ";

        emgSamplesD[0]!=0?feature <<"1:"<< emgSamplesD[0] << " ":feature<<"";
        emgSamplesD[1]!=0?feature <<"2:"<< emgSamplesD[1] << " ":feature<<"";
        emgSamplesD[2]!=0?feature <<"3:"<< emgSamplesD[2] << " ":feature<<"";
        emgSamplesD[3]!=0?feature <<"4:"<< emgSamplesD[3] << " ":feature<<"";
        emgSamplesD[4]!=0?feature <<"5:"<< emgSamplesD[4] << " ":feature<<"";
        emgSamplesD[5]!=0?feature <<"6:"<< emgSamplesD[5] << " ":feature<<"";
        emgSamplesD[6]!=0?feature <<"7:"<< emgSamplesD[6] << " ":feature<<"";
        emgSamplesD[7]!=0?feature <<"8:"<< emgSamplesD[7] << " ":feature<<"";

        accSamplesD[0]!=0?feature <<"9:"  << accSamplesD[0] << " ":feature<<"";
        accSamplesD[1]!=0?feature <<"10:" << accSamplesD[1] << " ":feature<<"";
        accSamplesD[2]!=0?feature <<"11:" << accSamplesD[2] << " ":feature<<"";

        gyroSamplesD[0]!=0?feature <<"12:" << gyroSamplesD[0] << " ":feature<<"";
        gyroSamplesD[1]!=0?feature <<"13:" << gyroSamplesD[1] << " ":feature<<"";
        gyroSamplesD[2]!=0?feature <<"14:" << gyroSamplesD[2] << " ":feature<<"";

        magnetSamplesD[0]!=0?feature <<"15:" << magnetSamplesD[0] << " ":feature<<"";
        magnetSamplesD[1]!=0?feature <<"16:" << magnetSamplesD[1] << " ":feature<<"";
        magnetSamplesD[2]!=0?feature <<"17:" << magnetSamplesD[2] << " ":feature<<"";
        magnetSamplesD[3]!=0?feature <<"18:" << magnetSamplesD[3] << " ":feature<<"";


        feature<<endl;
        libsvmFile.flush();
        libsvmFile.close();
    }
}


void MainWindow::onFileDirectoryButtonClicked()
{
    QString fileDirectory = QFileDialog::getExistingDirectory(this,"Caption",QString(),QFileDialog::ShowDirsOnly);
    qDebug()<<fileDirectory;
    ui->fileLocationTextEdit->setText(fileDirectory);
}

void MainWindow::loadTrainingFile(){

    m_trainSVMFile = QFileDialog::getOpenFileName(this,tr("Abrir base LIBSVM"),QString(), tr("Arquivos LibSVM  (*.train)"));

    ui->classifierfileLocationTextEdit->setText(m_trainSVMFile);

}
void MainWindow::loadModelFile(){

    m_modelSVMFile = QFileDialog::getOpenFileName(this,tr("Abrir modelo LIBSVM"),QString(), tr("Arquivos LibSVM  (*.model)"));

    ui->modelPredictFileLocationTextEdit->setText(m_modelSVMFile);

}

void MainWindow::loadTetstFile(){

    m_testSVMFile = QFileDialog::getOpenFileName(this,tr("Abrir arquivo teste LIBSVM"),QString(), tr("Arquivos LibSVM  (*.test)"));

    ui->testFileLocationTextEdit->setText(m_testSVMFile);

}

void MainWindow::savePredictModel(){
    m_predictSVMFile = QFileDialog::getSaveFileName(this,tr("salvar modelo LIBSVM"),QString(), tr("Arquivos LibSVM  (*.predict)"));

    ui->predictionFileLocationTextEdit->setText(m_predictSVMFile);

}
void MainWindow::saveModelFile(){

    m_modelSVMFile = QFileDialog::getSaveFileName(this,tr("salvar modelo LIBSVM"),QString(), tr("Arquivos LibSVM  (*.model)"));

    ui->modelfileLocationTextEdit->setText(m_modelSVMFile);

}

// Método para plotar os gráficos de eletromiograma, giroscópio e acelerometro
// o comandos para plotar foram utilizados de acordo com exemplos provindos da biblioteca qwt.
void MainWindow::plotDataChannels()
{
    //
    data_plotEmg1.clear();
    data_plotEmg2.clear();
    data_plotEmg3.clear();
    data_plotEmg4.clear();
    data_plotEmg5.clear();
    data_plotEmg6.clear();
    data_plotEmg7.clear();
    data_plotEmg8.clear();

    data_plotAccX.clear();
    data_plotAccY.clear();
    data_plotAccZ.clear();

    data_plotGyroX.clear();
    data_plotGyroY.clear();
    data_plotGyroZ.clear();

    //Plot
    data_time->push_back(((double)(cnt - first_get) / freq));
    data_emg1->push_back(emgSamplesD[0]);
    data_emg2->push_back(emgSamplesD[1]);
    data_emg3->push_back(emgSamplesD[2]);
    data_emg4->push_back(emgSamplesD[3]);
    data_emg5->push_back(emgSamplesD[4]);
    data_emg6->push_back(emgSamplesD[5]);
    data_emg7->push_back(emgSamplesD[6]);
    data_emg8->push_back(emgSamplesD[7]);

    data_accX->push_back(accSamplesD[0]);
    data_accY->push_back(accSamplesD[1]);
    data_accZ->push_back(accSamplesD[2]);

    data_gyroX->push_back(gyroSamplesD[0]);
    data_gyroY->push_back(gyroSamplesD[1]);
    data_gyroZ->push_back(gyroSamplesD[2]);

    if(data_time->size() < maxFr)
    {
        curveEMG1->setSamples(*data_time,*data_emg1);// we set the data to the curve
        curveEMG2->setSamples(*data_time,*data_emg2);
        curveEMG3->setSamples(*data_time,*data_emg3);
        curveEMG4->setSamples(*data_time,*data_emg4);
        curveEMG5->setSamples(*data_time,*data_emg5);
        curveEMG6->setSamples(*data_time,*data_emg6);
        curveEMG7->setSamples(*data_time,*data_emg7);
        curveEMG8->setSamples(*data_time,*data_emg8);

        curveACCX->setSamples(*data_time,*data_accX);
        curveACCY->setSamples(*data_time,*data_accY);
        curveACCZ->setSamples(*data_time,*data_accZ);

        curveGYROX->setSamples(*data_time,*data_gyroX);
        curveGYROY->setSamples(*data_time,*data_gyroY);
        curveGYROZ->setSamples(*data_time,*data_gyroZ);

    }
    else
    {
        data_plotEmg1 = data_emg1->mid(data_emg1->size()-(maxFr - 1), maxFr);
        data_plotEmg2 = data_emg2->mid(data_emg2->size()-(maxFr - 1), maxFr);
        data_plotEmg3 = data_emg3->mid(data_emg3->size()-(maxFr - 1), maxFr);
        data_plotEmg4 = data_emg4->mid(data_emg4->size()-(maxFr - 1), maxFr);
        data_plotEmg5 = data_emg5->mid(data_emg5->size()-(maxFr - 1), maxFr);
        data_plotEmg6 = data_emg6->mid(data_emg6->size()-(maxFr - 1), maxFr);
        data_plotEmg7 = data_emg7->mid(data_emg7->size()-(maxFr - 1), maxFr);
        data_plotEmg8 = data_emg8->mid(data_emg8->size()-(maxFr - 1), maxFr);

        data_plotAccX = data_accX->mid(data_accX->size()-(maxFr - 1), maxFr);
        data_plotAccY = data_accY->mid(data_accY->size()-(maxFr - 1), maxFr);
        data_plotAccZ = data_accZ->mid(data_accZ->size()-(maxFr - 1), maxFr);

        data_plotGyroX = data_gyroX->mid(data_gyroX->size()-(maxFr - 1), maxFr);
        data_plotGyroY = data_gyroY->mid(data_gyroY->size()-(maxFr - 1), maxFr);
        data_plotGyroZ = data_gyroZ->mid(data_gyroZ->size()-(maxFr - 1), maxFr);

        curveEMG1->setSamples(*data_plotTime, data_plotEmg1);
        curveEMG2->setSamples(*data_plotTime, data_plotEmg2);
        curveEMG3->setSamples(*data_plotTime, data_plotEmg3);
        curveEMG4->setSamples(*data_plotTime, data_plotEmg4);
        curveEMG5->setSamples(*data_plotTime, data_plotEmg5);
        curveEMG6->setSamples(*data_plotTime, data_plotEmg6);
        curveEMG7->setSamples(*data_plotTime, data_plotEmg7);
        curveEMG8->setSamples(*data_plotTime, data_plotEmg8);

        curveACCX->setSamples(*data_plotTime, data_plotAccX);
        curveACCY->setSamples(*data_plotTime, data_plotAccY);
        curveACCZ->setSamples(*data_plotTime, data_plotAccZ);

        curveGYROX->setSamples(*data_plotTime, data_plotGyroX);
        curveGYROY->setSamples(*data_plotTime, data_plotGyroY);
        curveGYROZ->setSamples(*data_plotTime, data_plotGyroZ);
        //curve->setSamples(*data_plotx, *((QVector) data_y->mid( data_y->size()-(CntlFreq - 1), CntlFreq)) );
    }

    ui->emg1Plot->replot();
    ui->emg2Plot->replot();
    ui->emg3Plot->replot();
    ui->emg4Plot->replot();
    ui->emg5Plot->replot();
    ui->emg6Plot->replot();
    ui->emg7Plot->replot();
    ui->emg8Plot->replot();

    ui->accelXPlot->replot();

    ui->gyroPlot->replot();


}


// Método para configurar o mecanismo de plotagem para as formas de onda dos canais de eletromiograma, giroscopio e acelerometro.
void MainWindow::init_qwtPlot()
{
    ui->emg1Plot->setCanvasBackground( Qt::white );
    ui->emg1Plot->setAxisScale( QwtPlot::yLeft, -128.0, 127.0 );
    ui->emg1Plot->setAxisScale( QwtPlot::xBottom, 0.0, plotTime );
    ui->emg1Plot->enableAxis(QwtPlot::xBottom,false);

    QwtPlotGrid *grid1 = new QwtPlotGrid();
    grid1->setMajorPen( Qt::gray, 0, Qt::DashLine);
    grid1->enableX(0);  grid1->attach(ui->emg1Plot);

    ui->emg2Plot->setCanvasBackground( Qt::white );
    ui->emg2Plot->setAxisScale( QwtPlot::yLeft, -128.0, 127.0 );
    ui->emg2Plot->setAxisScale( QwtPlot::xBottom, 0.0, plotTime );
    ui->emg2Plot->enableAxis(QwtPlot::xBottom,false);

    QwtPlotGrid *grid2 = new QwtPlotGrid();
    grid2->setMajorPen( Qt::gray, 0, Qt::DashLine);
    grid2->enableX(0);  grid2->attach(ui->emg2Plot);

    ui->emg3Plot->setCanvasBackground( Qt::white );
    ui->emg3Plot->setAxisScale( QwtPlot::yLeft, -128.0, 127.0 );
    ui->emg3Plot->setAxisScale( QwtPlot::xBottom, 0.0, plotTime );
    ui->emg3Plot->enableAxis(QwtPlot::xBottom,false);

    QwtPlotGrid *grid3 = new QwtPlotGrid();
    grid3->setMajorPen( Qt::gray, 0, Qt::DashLine);
    grid3->enableX(0);  grid3->attach(ui->emg3Plot);

    ui->emg4Plot->setCanvasBackground( Qt::white );
    ui->emg4Plot->setAxisScale( QwtPlot::yLeft, -128.0, 127.0 );
    ui->emg4Plot->setAxisScale( QwtPlot::xBottom, 0.0, plotTime );
    ui->emg4Plot->enableAxis(QwtPlot::xBottom,false);


    QwtPlotGrid *grid4 = new QwtPlotGrid();
    grid4->setMajorPen( Qt::gray, 0, Qt::DashLine);
    grid4->enableX(0);  grid4->attach(ui->emg4Plot);

    ui->emg5Plot->setCanvasBackground( Qt::white );
    ui->emg5Plot->setAxisScale( QwtPlot::yLeft, -128.0, 127.0 );
    ui->emg5Plot->setAxisScale( QwtPlot::xBottom, 0.0, plotTime );
    ui->emg5Plot->enableAxis(QwtPlot::xBottom,false);

    QwtPlotGrid *grid5 = new QwtPlotGrid();
    grid5->setMajorPen( Qt::gray, 0, Qt::DashLine);
    grid5->enableX(0);  grid5->attach(ui->emg5Plot);

    ui->emg6Plot->setCanvasBackground( Qt::white );
    ui->emg6Plot->setAxisScale( QwtPlot::yLeft, -128.0, 127.0 );
    ui->emg6Plot->setAxisScale( QwtPlot::xBottom, 0.0, plotTime );
    ui->emg6Plot->enableAxis(QwtPlot::xBottom,false);

    QwtPlotGrid *grid6 = new QwtPlotGrid();
    grid6->setMajorPen( Qt::gray, 0, Qt::DashLine);
    grid6->enableX(0);  grid6->attach(ui->emg6Plot);

    ui->emg7Plot->setCanvasBackground( Qt::white );
    ui->emg7Plot->setAxisScale( QwtPlot::yLeft, -128.0, 127.0 );
    ui->emg7Plot->setAxisScale( QwtPlot::xBottom, 0.0, plotTime );
    ui->emg7Plot->enableAxis(QwtPlot::xBottom,false);

    QwtPlotGrid *grid7 = new QwtPlotGrid();
    grid7->setMajorPen( Qt::gray, 0, Qt::DashLine);
    grid7->enableX(0);  grid7->attach(ui->emg7Plot);

    ui->emg8Plot->setCanvasBackground( Qt::white );
    ui->emg8Plot->setAxisScale( QwtPlot::yLeft, -128.0, 127.0 );
    ui->emg8Plot->setAxisScale( QwtPlot::xBottom, 0.0, plotTime );
    ui->emg8Plot->enableAxis(QwtPlot::xBottom,false);

    QwtPlotGrid *grid8 = new QwtPlotGrid();
    grid8->setMajorPen( Qt::gray, 0, Qt::DashLine);
    grid8->enableX(0);  grid8->attach(ui->emg8Plot);


    ui->accelXPlot->setCanvasBackground( Qt::white );
    ui->accelXPlot->setAxisScale( QwtPlot::yLeft, -2.5, 2.5 );
    ui->accelXPlot->setAxisScale( QwtPlot::xBottom, 0.0, plotTime );
    ui->accelXPlot->enableAxis(QwtPlot::xBottom,false);

    QwtPlotGrid *grid9 = new QwtPlotGrid();
    grid9->setMajorPen( Qt::gray, 0, Qt::DashLine);
    grid9->enableX(0);  grid9->attach(ui->accelXPlot);

    ui->gyroPlot->setCanvasBackground( Qt::white );
    ui->gyroPlot->setAxisScale( QwtPlot::yLeft, -128.0, 127.0 );
    ui->gyroPlot->setAxisScale( QwtPlot::xBottom, 0.0, plotTime );
    ui->gyroPlot->enableAxis(QwtPlot::xBottom,false);

    QwtPlotGrid *grid10 = new QwtPlotGrid();
    grid10->setMajorPen( Qt::gray, 0, Qt::DashLine);
    grid10->enableX(0);  grid10->attach(ui->gyroPlot);


    //vermelho, amarelo, verde, azul, laranja, roxo, marrom e rosa

    curveEMG1 = new QwtPlotCurve;            curveEMG2 = new QwtPlotCurve;
    curveEMG1->setPen(QColor(25,91,255),1);  curveEMG2->setPen(QColor(10,220,107),1);
    curveEMG1->attach(ui->emg1Plot);         curveEMG2->attach(ui->emg2Plot);

    curveEMG3 = new QwtPlotCurve;            curveEMG4 = new QwtPlotCurve;
    curveEMG3->setPen(QColor(255,252,0),1);  curveEMG4->setPen(QColor(232,116,0),1);
    curveEMG3->attach(ui->emg3Plot);         curveEMG4->attach(ui->emg4Plot);

    curveEMG5 = new QwtPlotCurve;            curveEMG6 = new QwtPlotCurve;
    curveEMG5->setPen(QColor(242,0,144),1);  curveEMG6->setPen(QColor(220,168,10),1);
    curveEMG5->attach(ui->emg5Plot);         curveEMG6->attach(ui->emg6Plot);

    curveEMG7 = new QwtPlotCurve;            curveEMG8 = new QwtPlotCurve;
    curveEMG7->setPen(QColor(80,130,15),1);  curveEMG8->setPen(QColor(62,0,242),1);
    curveEMG7->attach(ui->emg7Plot);         curveEMG8->attach(ui->emg8Plot);


    curveACCX = new QwtPlotCurve;       curveACCY = new QwtPlotCurve;
    curveACCX->setPen(Qt::red, 1);      curveACCY->setPen(Qt::green, 1);
    curveACCX->attach(ui->accelXPlot);  curveACCY->attach(ui->accelXPlot);

    curveACCZ = new QwtPlotCurve;
    curveACCZ->setPen(Qt::blue, 1);
    curveACCZ->attach(ui->accelXPlot);

    curveGYROX = new QwtPlotCurve;       curveGYROY = new QwtPlotCurve;
    curveGYROX->setPen(Qt::red, 1);      curveGYROY->setPen(Qt::green, 1);
    curveGYROX->attach(ui->gyroPlot);    curveGYROY->attach(ui->gyroPlot);

    curveGYROZ = new QwtPlotCurve;
    curveGYROZ->setPen(Qt::blue, 1);
    curveGYROZ->attach(ui->gyroPlot);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::stopRecording(){
    training = false;
    ui->m_recordGestureButton->setStyleSheet("*{ background-image: url(:/record.png);background-repeat: repeat; }");
    ui->m_progressBar->hide();
    ui->m_progressBar->setValue(0);
    ui->m_progressBar->update();

    m_registerCounter +=1;
    ui->m_sessionLabel->setText(trUtf8("Registro nº: %1").arg(QString::number(m_registerCounter)));

}

void MainWindow::fillCompleteFileName(){
    int fileNameValue = ui->fileNameSpinBox->value();
    QString fileDirectory = ui->fileLocationTextEdit->displayText();
    QString fileName = ui->fileNameTextEdit->displayText();
    QString extension = ui->m_typeComboBox->currentIndex() == 0? ".train":".test";
    fileComplete = fileDirectory.append("/");
    fileComplete = fileComplete.append(fileName);
    fileComplete = fileComplete.append(QString::number(fileNameValue));

    fileComplete = fileComplete.append(extension);


    if (fileComplete.isEmpty() || fileDirectory.isEmpty() || fileName.isEmpty())
    {
        qDebug() << trUtf8("Diretório ou arquivo inválido!!!");
        return;
    }
    else
    {  libsvmFile.setFileName(fileComplete);
        if (!libsvmFile.open(QIODevice::ReadWrite))
        {
            QMessageBox::information(this, trUtf8("Impossível Abrir o arquivo"),
                                     libsvmFile.errorString());
            return;
        }
    }
}


void MainWindow::onSVMTypeChanged(int currentSVM){
    if(currentSVM==C_SVC){
        ui->m_kernelCostLineEdit->setEnabled(true);
        ui->m_kernelNuLineEdit->setEnabled(false);
    }else{
        ui->m_kernelNuLineEdit->setEnabled(true);
        ui->m_kernelCostLineEdit->setEnabled(false);
    }
}

void MainWindow::onKernelTypeChanged(int currentKernel){
    //        0 -- linear: u'*v
    //        1 -- polynomial: (gamma*u'*v + coef0)^degree
    //        2 -- radial basis function: exp(-gamma*|u-v|^2)
    //        3 -- sigmoid: tanh(gamma*u'*v + coef0)

    switch (currentKernel) {
    case LINEAR:
        ui->m_kernelCoefLineEdit->setEnabled(false);
        ui->m_kernelGammaLineEdit->setEnabled(false);
        ui->m_kernelDegreeLineEdit->setEnabled(false);
        break;
    case POLYNOMIAL:
        ui->m_kernelCoefLineEdit->setEnabled(true);
        ui->m_kernelGammaLineEdit->setEnabled(true);
        ui->m_kernelDegreeLineEdit->setEnabled(true);
        break;
    case RBF:
        ui->m_kernelCoefLineEdit->setEnabled(false);
        ui->m_kernelGammaLineEdit->setEnabled(true);
        ui->m_kernelDegreeLineEdit->setEnabled(false);
        break;
    case SIGMOID:
        ui->m_kernelCoefLineEdit->setEnabled(true);
        ui->m_kernelGammaLineEdit->setEnabled(true);
        ui->m_kernelDegreeLineEdit->setEnabled(false);
        break;
    case PRECOMPUTED:
        ui->m_kernelCoefLineEdit->setEnabled(false);
        ui->m_kernelGammaLineEdit->setEnabled(false);
        ui->m_kernelDegreeLineEdit->setEnabled(false);
        break;
    default:
        break;
    }

}

void MainWindow::recordGesture()
{

    gestureAnimation->start();
    training = true;

    ui->m_recordGestureButton->setStyleSheet("*{ background-image: url(:/recording.png);background-repeat: repeat; }");

    if(libsvmFile.size()==0 && !libsvmFile.isOpen()){
        fillCompleteFileName();


    }

    ui->m_progressBar->show();
    m_recordTime->start(GESTURE_CAPTURE_TIME_MILISECONDS);
}

void MainWindow::changeGesture(int index){

    m_registerCounter = 1;
    ui->m_sessionLabel->setText(trUtf8("Registro nº: %1").arg(QString::number(m_registerCounter)));
    delete gestureAnimation;

    QDir dir(".");
    gestureAnimation = new QMovie(dir.absolutePath()+ gestureGIFMap->value(index));
    ui->m_gestureGif->setMovie(gestureAnimation);
    gestureAnimation->setSpeed(300);
    gestureAnimation->setScaledSize(ui->m_gestureGif->size());



}
