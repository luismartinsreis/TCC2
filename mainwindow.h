#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QThread>
#include <qwt_plot.h>
#include <qwt_plot_canvas.h>
#include <qwt_plot_curve.h>
#include <QMovie>
#include <QProcess>

namespace Ui {
class MainWindow;
}

class QTimer;

class QElapsedTimer;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    enum TypeDataBase{
        Training =0,
        Testing
    };

    enum SVMType{
        C_SVC = 0,
        nu_SVC
    };

    enum KernelType{
        LINEAR =0,
        POLYNOMIAL,
        RBF,
        SIGMOID,
        PRECOMPUTED
    };

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:
    void recordGesture();

    //void recordWithTimer();

    void stopRecording();
    void changeDataBaseType(int index);
    void changeGesture(int index);
    void executeTraining();
    void loadTrainingFile();
    void saveModelFile();

    void onSVMTypeChanged(int currentSVM);
    void onKernelTypeChanged(int currentKernel);
    void onReadReadyStdoutTrain();
    void loadTetstFile();
    void savePredictModel();
    void onClassify();
    void loadModelFile();
    void onReadReadyStdoutPredict();
private slots:
    void onOpenCloseButtonClicked();
    void onFileDirectoryButtonClicked();
    void onReadyRead();


private:
    Ui::MainWindow *ui;
    void init_qwtPlot();
    void plotDataChannels();
    int m_registerCounter; // conta o numero de vezes que a sequencia de frames para um gesto foi capturado;
    QMovie * gestureAnimation;

    QString m_trainSVMFile;
    QString m_modelSVMFile;
    QString m_testSVMFile;
    QString m_predictSVMFile;

    int type;
    QProcess * svmTrain;
    QProcess * svmPredict;
    QTimer *timer;
    QTimer *m_recordTime;
    QwtPlotCurve *curveEMG1, *curveEMG2, *curveEMG3, *curveEMG4;
    QwtPlotCurve *curveEMG5, *curveEMG6, *curveEMG7, *curveEMG8;
    QwtPlotCurve *curveACCX, *curveACCY, *curveACCZ;
    QwtPlotCurve *curveGYROX, *curveGYROY, *curveGYROZ;
    QVector<double> *data_time, *data_plotTime;  //, *data_ploty;
    QVector<double> *data_emg1, *data_emg2, *data_emg3, *data_emg4;
    QVector<double> *data_emg5, *data_emg6, *data_emg7, *data_emg8;
    QVector<double> *data_accX, *data_accY, *data_accZ;
    QVector<double> *data_gyroX, *data_gyroY, *data_gyroZ;
    QVector<double> *data_magnetX, *data_magnetY, *data_magnetZ, *data_magnetW;
    void featureToLibsvmFormat();
    void fillCompleteFileName();
};

#endif // MAINWINDOW_H
