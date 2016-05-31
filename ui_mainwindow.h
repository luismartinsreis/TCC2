/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qwt_plot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *openCloseButton;
    QGroupBox *emgGroupbox;
    QWidget *layoutWidget;
    QGridLayout *EMGGrid;
    QwtPlot *emg6Plot;
    QwtPlot *emg7Plot;
    QwtPlot *emg8Plot;
    QwtPlot *emg2Plot;
    QwtPlot *emg4Plot;
    QwtPlot *emg1Plot;
    QwtPlot *emg3Plot;
    QwtPlot *emg5Plot;
    QwtPlot *gyroPlot;
    QLabel *label_emg4_4;
    QLabel *label_emg4_3;
    QLabel *label_emg2;
    QLabel *label_emg3;
    QLabel *label_emg4;
    QLabel *label_emg1;
    QLabel *label_emg5;
    QLabel *label_emg6;
    QLabel *label_emg4_2;
    QLabel *label_emg7;
    QwtPlot *accelXPlot;
    QTabWidget *m_tabForm;
    QWidget *training;
    QGroupBox *groupBox;
    QProgressBar *m_progressBar;
    QLabel *m_gestureGif;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *m_recordGestureButton;
    QComboBox *m_gestureTrainComboBox;
    QLabel *m_sessionLabel;
    QGroupBox *groupBox_4;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *filenameLabel_2;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *m_typeComboBox;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QLabel *filenameLabel;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *fileNameTextEdit;
    QSpinBox *fileNameSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *directoryLabel;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *fileLocationTextEdit;
    QToolButton *fileDirectoryButton;
    QLineEdit *receiveEditText;
    QGroupBox *groupBox_3;
    QFrame *poseFrame;
    QFrame *frame;
    QLabel *myoGestureLabel;
    QWidget *classifier;
    QGroupBox *groupBox_5;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_9;
    QLabel *filenameLabel_4;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *classifierfileLocationTextEdit;
    QToolButton *classifierfileDirectoryButton;
    QHBoxLayout *horizontalLayout_10;
    QLabel *filenameLabel_5;
    QSpacerItem *horizontalSpacer_8;
    QLineEdit *modelfileLocationTextEdit;
    QToolButton *modelfileDirectoryButton;
    QGroupBox *groupBox_6;
    QWidget *layoutWidget4;
    QFormLayout *formLayout;
    QLabel *filenameLabel_7;
    QComboBox *m_svmTypeCombobox;
    QLabel *filenameLabel_6;
    QComboBox *m_kernelCombobox;
    QLabel *filenameLabel_8;
    QLineEdit *m_kernelDegreeLineEdit;
    QLabel *label;
    QLineEdit *m_kernelGammaLineEdit;
    QLabel *filenameLabel_9;
    QLineEdit *m_kernelCoefLineEdit;
    QLabel *filenameLabel_10;
    QLineEdit *m_kernelCostLineEdit;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *filenameLabel_11;
    QLineEdit *m_kernelNuLineEdit;
    QHBoxLayout *horizontalLayout_8;
    QLabel *filenameLabel_12;
    QLineEdit *m_kernelCacheLineEdit;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_2;
    QLineEdit *m_kernelEpsilonLineEdit;
    QHBoxLayout *horizontalLayout_12;
    QLabel *filenameLabel_13;
    QCheckBox *m_probabilityCheckBox;
    QHBoxLayout *horizontalLayout_13;
    QLabel *filenameLabel_14;
    QCheckBox *m_shrinkCheckBox;
    QHBoxLayout *horizontalLayout_14;
    QLabel *filenameLabel_15;
    QLineEdit *m_kernelCrossLineEdit;
    QGroupBox *groupBox_9;
    QTextBrowser *console1;
    QPushButton *m_callSVMButton;
    QPushButton *m_clearTrainButton;
    QWidget *testTab;
    QGroupBox *groupBox_7;
    QWidget *layoutWidget6;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_15;
    QLabel *filenameLabel_16;
    QSpacerItem *horizontalSpacer_9;
    QLineEdit *testFileLocationTextEdit;
    QToolButton *testFileDirectoryButton;
    QHBoxLayout *horizontalLayout_7;
    QLabel *filenameLabel_18;
    QSpacerItem *horizontalSpacer_11;
    QLineEdit *modelPredictFileLocationTextEdit;
    QToolButton *modelPredictFileDirectoryButton;
    QHBoxLayout *horizontalLayout_16;
    QLabel *filenameLabel_17;
    QSpacerItem *horizontalSpacer_10;
    QLineEdit *predictionFileLocationTextEdit;
    QToolButton *predictFileDirectoryButton;
    QGroupBox *groupBox_8;
    QTextBrowser *console2;
    QPushButton *m_clearResultsButton;
    QPushButton *m_classifierSVMButton;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_emg5_2;
    QFrame *axeY_2;
    QLabel *label_emg5_3;
    QFrame *axeY;
    QLabel *label_emg5_4;
    QFrame *axeX;
    QLabel *label_emg5_5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1360, 700);
        MainWindow->setMinimumSize(QSize(1360, 700));
        MainWindow->setMaximumSize(QSize(1360, 700));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        openCloseButton = new QPushButton(centralWidget);
        openCloseButton->setObjectName(QStringLiteral("openCloseButton"));
        openCloseButton->setGeometry(QRect(1270, 10, 80, 35));
        openCloseButton->setMinimumSize(QSize(80, 35));
        openCloseButton->setMaximumSize(QSize(80, 35));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        font.setStrikeOut(false);
        openCloseButton->setFont(font);
        openCloseButton->setStyleSheet(QStringLiteral(" background-color: #05B8CC; color: white;"));
        emgGroupbox = new QGroupBox(centralWidget);
        emgGroupbox->setObjectName(QStringLiteral("emgGroupbox"));
        emgGroupbox->setGeometry(QRect(10, 270, 1341, 371));
        emgGroupbox->setStyleSheet(QStringLiteral("QGroupBox {  border: 1px solid #05B8CC;}"));
        layoutWidget = new QWidget(emgGroupbox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 1326, 360));
        EMGGrid = new QGridLayout(layoutWidget);
        EMGGrid->setSpacing(6);
        EMGGrid->setContentsMargins(11, 11, 11, 11);
        EMGGrid->setObjectName(QStringLiteral("EMGGrid"));
        EMGGrid->setSizeConstraint(QLayout::SetFixedSize);
        EMGGrid->setContentsMargins(0, 0, 0, 0);
        emg6Plot = new QwtPlot(layoutWidget);
        emg6Plot->setObjectName(QStringLiteral("emg6Plot"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(emg6Plot->sizePolicy().hasHeightForWidth());
        emg6Plot->setSizePolicy(sizePolicy);
        emg6Plot->setMinimumSize(QSize(260, 140));
        emg6Plot->setMaximumSize(QSize(260, 140));

        EMGGrid->addWidget(emg6Plot, 3, 1, 1, 1);

        emg7Plot = new QwtPlot(layoutWidget);
        emg7Plot->setObjectName(QStringLiteral("emg7Plot"));
        sizePolicy.setHeightForWidth(emg7Plot->sizePolicy().hasHeightForWidth());
        emg7Plot->setSizePolicy(sizePolicy);
        emg7Plot->setMinimumSize(QSize(260, 140));
        emg7Plot->setMaximumSize(QSize(260, 140));

        EMGGrid->addWidget(emg7Plot, 3, 2, 1, 1);

        emg8Plot = new QwtPlot(layoutWidget);
        emg8Plot->setObjectName(QStringLiteral("emg8Plot"));
        sizePolicy.setHeightForWidth(emg8Plot->sizePolicy().hasHeightForWidth());
        emg8Plot->setSizePolicy(sizePolicy);
        emg8Plot->setMinimumSize(QSize(260, 140));
        emg8Plot->setMaximumSize(QSize(260, 140));

        EMGGrid->addWidget(emg8Plot, 3, 3, 1, 1);

        emg2Plot = new QwtPlot(layoutWidget);
        emg2Plot->setObjectName(QStringLiteral("emg2Plot"));
        sizePolicy.setHeightForWidth(emg2Plot->sizePolicy().hasHeightForWidth());
        emg2Plot->setSizePolicy(sizePolicy);
        emg2Plot->setMinimumSize(QSize(260, 140));
        emg2Plot->setMaximumSize(QSize(260, 140));

        EMGGrid->addWidget(emg2Plot, 1, 1, 1, 1);

        emg4Plot = new QwtPlot(layoutWidget);
        emg4Plot->setObjectName(QStringLiteral("emg4Plot"));
        sizePolicy.setHeightForWidth(emg4Plot->sizePolicy().hasHeightForWidth());
        emg4Plot->setSizePolicy(sizePolicy);
        emg4Plot->setMinimumSize(QSize(260, 140));
        emg4Plot->setMaximumSize(QSize(260, 140));

        EMGGrid->addWidget(emg4Plot, 1, 3, 1, 1);

        emg1Plot = new QwtPlot(layoutWidget);
        emg1Plot->setObjectName(QStringLiteral("emg1Plot"));
        sizePolicy.setHeightForWidth(emg1Plot->sizePolicy().hasHeightForWidth());
        emg1Plot->setSizePolicy(sizePolicy);
        emg1Plot->setMinimumSize(QSize(260, 140));
        emg1Plot->setMaximumSize(QSize(260, 140));

        EMGGrid->addWidget(emg1Plot, 1, 0, 1, 1);

        emg3Plot = new QwtPlot(layoutWidget);
        emg3Plot->setObjectName(QStringLiteral("emg3Plot"));
        sizePolicy.setHeightForWidth(emg3Plot->sizePolicy().hasHeightForWidth());
        emg3Plot->setSizePolicy(sizePolicy);
        emg3Plot->setMinimumSize(QSize(260, 140));
        emg3Plot->setMaximumSize(QSize(260, 140));

        EMGGrid->addWidget(emg3Plot, 1, 2, 1, 1);

        emg5Plot = new QwtPlot(layoutWidget);
        emg5Plot->setObjectName(QStringLiteral("emg5Plot"));
        sizePolicy.setHeightForWidth(emg5Plot->sizePolicy().hasHeightForWidth());
        emg5Plot->setSizePolicy(sizePolicy);
        emg5Plot->setMinimumSize(QSize(260, 140));
        emg5Plot->setMaximumSize(QSize(260, 140));

        EMGGrid->addWidget(emg5Plot, 3, 0, 1, 1);

        gyroPlot = new QwtPlot(layoutWidget);
        gyroPlot->setObjectName(QStringLiteral("gyroPlot"));
        sizePolicy.setHeightForWidth(gyroPlot->sizePolicy().hasHeightForWidth());
        gyroPlot->setSizePolicy(sizePolicy);
        gyroPlot->setMinimumSize(QSize(260, 140));
        gyroPlot->setMaximumSize(QSize(260, 140));

        EMGGrid->addWidget(gyroPlot, 3, 4, 1, 1);

        label_emg4_4 = new QLabel(layoutWidget);
        label_emg4_4->setObjectName(QStringLiteral("label_emg4_4"));
        label_emg4_4->setMinimumSize(QSize(200, 20));
        label_emg4_4->setMaximumSize(QSize(1000, 1000));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_emg4_4->setPalette(palette);
        QFont font1;
        font1.setPointSize(8);
        label_emg4_4->setFont(font1);
        label_emg4_4->setWordWrap(true);

        EMGGrid->addWidget(label_emg4_4, 0, 4, 1, 1);

        label_emg4_3 = new QLabel(layoutWidget);
        label_emg4_3->setObjectName(QStringLiteral("label_emg4_3"));
        label_emg4_3->setMinimumSize(QSize(200, 20));
        label_emg4_3->setMaximumSize(QSize(1000, 1000));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_emg4_3->setPalette(palette1);
        label_emg4_3->setFont(font1);
        label_emg4_3->setWordWrap(true);

        EMGGrid->addWidget(label_emg4_3, 2, 4, 1, 1);

        label_emg2 = new QLabel(layoutWidget);
        label_emg2->setObjectName(QStringLiteral("label_emg2"));
        label_emg2->setMinimumSize(QSize(200, 20));
        label_emg2->setMaximumSize(QSize(1000, 1000));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_emg2->setPalette(palette2);
        label_emg2->setFont(font1);
        label_emg2->setWordWrap(true);

        EMGGrid->addWidget(label_emg2, 0, 1, 1, 1);

        label_emg3 = new QLabel(layoutWidget);
        label_emg3->setObjectName(QStringLiteral("label_emg3"));
        label_emg3->setMinimumSize(QSize(200, 20));
        label_emg3->setMaximumSize(QSize(1000, 1000));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_emg3->setPalette(palette3);
        label_emg3->setFont(font1);
        label_emg3->setWordWrap(true);

        EMGGrid->addWidget(label_emg3, 0, 2, 1, 1);

        label_emg4 = new QLabel(layoutWidget);
        label_emg4->setObjectName(QStringLiteral("label_emg4"));
        label_emg4->setMinimumSize(QSize(200, 20));
        label_emg4->setMaximumSize(QSize(1000, 1000));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_emg4->setPalette(palette4);
        label_emg4->setFont(font1);
        label_emg4->setWordWrap(true);

        EMGGrid->addWidget(label_emg4, 0, 3, 1, 1);

        label_emg1 = new QLabel(layoutWidget);
        label_emg1->setObjectName(QStringLiteral("label_emg1"));
        label_emg1->setMinimumSize(QSize(200, 20));
        label_emg1->setMaximumSize(QSize(1000, 1000));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_emg1->setPalette(palette5);
        label_emg1->setFont(font1);
        label_emg1->setWordWrap(true);

        EMGGrid->addWidget(label_emg1, 0, 0, 1, 1);

        label_emg5 = new QLabel(layoutWidget);
        label_emg5->setObjectName(QStringLiteral("label_emg5"));
        label_emg5->setMinimumSize(QSize(200, 20));
        label_emg5->setMaximumSize(QSize(1000, 1000));
        QPalette palette6;
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        label_emg5->setPalette(palette6);
        label_emg5->setFont(font1);
        label_emg5->setStyleSheet(QStringLiteral("color:rgb(0, 0, 0)"));
        label_emg5->setWordWrap(true);

        EMGGrid->addWidget(label_emg5, 2, 0, 1, 1);

        label_emg6 = new QLabel(layoutWidget);
        label_emg6->setObjectName(QStringLiteral("label_emg6"));
        label_emg6->setMinimumSize(QSize(200, 20));
        label_emg6->setMaximumSize(QSize(1000, 1000));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_emg6->setPalette(palette7);
        label_emg6->setFont(font1);
        label_emg6->setWordWrap(true);

        EMGGrid->addWidget(label_emg6, 2, 1, 1, 1);

        label_emg4_2 = new QLabel(layoutWidget);
        label_emg4_2->setObjectName(QStringLiteral("label_emg4_2"));
        label_emg4_2->setMinimumSize(QSize(200, 20));
        label_emg4_2->setMaximumSize(QSize(1000, 1000));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_emg4_2->setPalette(palette8);
        label_emg4_2->setFont(font1);
        label_emg4_2->setWordWrap(true);

        EMGGrid->addWidget(label_emg4_2, 2, 3, 1, 1);

        label_emg7 = new QLabel(layoutWidget);
        label_emg7->setObjectName(QStringLiteral("label_emg7"));
        label_emg7->setMinimumSize(QSize(200, 20));
        label_emg7->setMaximumSize(QSize(1000, 1000));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        label_emg7->setPalette(palette9);
        label_emg7->setFont(font1);
        label_emg7->setStyleSheet(QStringLiteral("color : rgb(0, 0, 0)"));
        label_emg7->setWordWrap(true);

        EMGGrid->addWidget(label_emg7, 2, 2, 1, 1);

        accelXPlot = new QwtPlot(layoutWidget);
        accelXPlot->setObjectName(QStringLiteral("accelXPlot"));
        sizePolicy.setHeightForWidth(accelXPlot->sizePolicy().hasHeightForWidth());
        accelXPlot->setSizePolicy(sizePolicy);
        accelXPlot->setMinimumSize(QSize(260, 140));
        accelXPlot->setMaximumSize(QSize(260, 140));

        EMGGrid->addWidget(accelXPlot, 1, 4, 1, 1);

        m_tabForm = new QTabWidget(centralWidget);
        m_tabForm->setObjectName(QStringLiteral("m_tabForm"));
        m_tabForm->setGeometry(QRect(0, 0, 821, 261));
        m_tabForm->setStyleSheet(QStringLiteral("background-color:rgb(236, 236, 236) "));
        training = new QWidget();
        training->setObjectName(QStringLiteral("training"));
        groupBox = new QGroupBox(training);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 261, 221));
        groupBox->setStyleSheet(QStringLiteral("QGroupBox {  border: 1px solid #05B8CC;}"));
        m_progressBar = new QProgressBar(groupBox);
        m_progressBar->setObjectName(QStringLiteral("m_progressBar"));
        m_progressBar->setGeometry(QRect(11, 185, 230, 25));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_progressBar->sizePolicy().hasHeightForWidth());
        m_progressBar->setSizePolicy(sizePolicy1);
        m_progressBar->setMinimumSize(QSize(230, 25));
        m_progressBar->setMaximumSize(QSize(250, 25));
        m_progressBar->setValue(0);
        m_progressBar->setTextVisible(true);
        m_gestureGif = new QLabel(groupBox);
        m_gestureGif->setObjectName(QStringLiteral("m_gestureGif"));
        m_gestureGif->setGeometry(QRect(11, 57, 230, 122));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_gestureGif->sizePolicy().hasHeightForWidth());
        m_gestureGif->setSizePolicy(sizePolicy2);
        m_gestureGif->setMinimumSize(QSize(230, 122));
        m_gestureGif->setMaximumSize(QSize(230, 122));
        m_gestureGif->setStyleSheet(QStringLiteral("QLabel {  border: 1px solid #05B8CC;}"));
        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(11, 21, 244, 30));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        m_recordGestureButton = new QPushButton(layoutWidget1);
        m_recordGestureButton->setObjectName(QStringLiteral("m_recordGestureButton"));
        sizePolicy1.setHeightForWidth(m_recordGestureButton->sizePolicy().hasHeightForWidth());
        m_recordGestureButton->setSizePolicy(sizePolicy1);
        m_recordGestureButton->setMinimumSize(QSize(28, 28));
        m_recordGestureButton->setMaximumSize(QSize(28, 28));
        m_recordGestureButton->setStyleSheet(QStringLiteral("background-image: url(:/record.png);"));

        horizontalLayout->addWidget(m_recordGestureButton);

        m_gestureTrainComboBox = new QComboBox(layoutWidget1);
        m_gestureTrainComboBox->setObjectName(QStringLiteral("m_gestureTrainComboBox"));
        m_gestureTrainComboBox->setMinimumSize(QSize(0, 28));
        m_gestureTrainComboBox->setMaximumSize(QSize(16777215, 28));

        horizontalLayout->addWidget(m_gestureTrainComboBox);

        m_sessionLabel = new QLabel(layoutWidget1);
        m_sessionLabel->setObjectName(QStringLiteral("m_sessionLabel"));
        m_sessionLabel->setMinimumSize(QSize(0, 28));
        m_sessionLabel->setMaximumSize(QSize(16777215, 28));

        horizontalLayout->addWidget(m_sessionLabel);

        layoutWidget->raise();
        m_progressBar->raise();
        m_gestureGif->raise();
        groupBox_4 = new QGroupBox(training);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(280, 10, 301, 221));
        groupBox_4->setStyleSheet(QStringLiteral("QGroupBox {  border: 1px solid #05B8CC;}"));
        layoutWidget2 = new QWidget(groupBox_4);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 20, 285, 126));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        filenameLabel_2 = new QLabel(layoutWidget2);
        filenameLabel_2->setObjectName(QStringLiteral("filenameLabel_2"));
        sizePolicy1.setHeightForWidth(filenameLabel_2->sizePolicy().hasHeightForWidth());
        filenameLabel_2->setSizePolicy(sizePolicy1);
        filenameLabel_2->setMinimumSize(QSize(30, 25));
        filenameLabel_2->setMaximumSize(QSize(30, 25));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        QBrush brush3(QColor(236, 236, 236, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette10.setBrush(QPalette::Active, QPalette::Light, brush);
        palette10.setBrush(QPalette::Active, QPalette::Midlight, brush);
        QBrush brush4(QColor(127, 127, 127, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette10.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(170, 170, 170, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette10.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette10.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette10.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette10.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette10.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette10.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette10.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette10.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
        filenameLabel_2->setPalette(palette10);
        filenameLabel_2->setFont(font1);
        filenameLabel_2->setStyleSheet(QStringLiteral("color:rgb(0, 0, 0)"));
        filenameLabel_2->setWordWrap(true);

        horizontalLayout_5->addWidget(filenameLabel_2);

        horizontalSpacer_3 = new QSpacerItem(75, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        m_typeComboBox = new QComboBox(layoutWidget2);
        m_typeComboBox->setObjectName(QStringLiteral("m_typeComboBox"));
        sizePolicy1.setHeightForWidth(m_typeComboBox->sizePolicy().hasHeightForWidth());
        m_typeComboBox->setSizePolicy(sizePolicy1);
        m_typeComboBox->setMinimumSize(QSize(133, 25));
        m_typeComboBox->setMaximumSize(QSize(133, 16777215));

        horizontalLayout_5->addWidget(m_typeComboBox);

        horizontalSpacer = new QSpacerItem(25, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        filenameLabel = new QLabel(layoutWidget2);
        filenameLabel->setObjectName(QStringLiteral("filenameLabel"));
        sizePolicy1.setHeightForWidth(filenameLabel->sizePolicy().hasHeightForWidth());
        filenameLabel->setSizePolicy(sizePolicy1);
        filenameLabel->setMinimumSize(QSize(0, 25));
        filenameLabel->setMaximumSize(QSize(16777215, 25));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette11.setBrush(QPalette::Active, QPalette::Light, brush);
        palette11.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette11.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette11.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette11.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette11.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette11.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette11.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette11.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
        filenameLabel->setPalette(palette11);
        filenameLabel->setFont(font1);
        filenameLabel->setStyleSheet(QStringLiteral("color:rgb(0, 0, 0)"));
        filenameLabel->setWordWrap(true);

        horizontalLayout_4->addWidget(filenameLabel);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        fileNameTextEdit = new QLineEdit(layoutWidget2);
        fileNameTextEdit->setObjectName(QStringLiteral("fileNameTextEdit"));
        sizePolicy1.setHeightForWidth(fileNameTextEdit->sizePolicy().hasHeightForWidth());
        fileNameTextEdit->setSizePolicy(sizePolicy1);
        fileNameTextEdit->setMinimumSize(QSize(133, 25));
        fileNameTextEdit->setMaximumSize(QSize(133, 25));

        horizontalLayout_4->addWidget(fileNameTextEdit);

        fileNameSpinBox = new QSpinBox(layoutWidget2);
        fileNameSpinBox->setObjectName(QStringLiteral("fileNameSpinBox"));
        fileNameSpinBox->setMinimumSize(QSize(25, 25));
        fileNameSpinBox->setMaximumSize(QSize(25, 25));
        fileNameSpinBox->setValue(1);

        horizontalLayout_4->addWidget(fileNameSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        directoryLabel = new QLabel(layoutWidget2);
        directoryLabel->setObjectName(QStringLiteral("directoryLabel"));
        sizePolicy1.setHeightForWidth(directoryLabel->sizePolicy().hasHeightForWidth());
        directoryLabel->setSizePolicy(sizePolicy1);
        directoryLabel->setMinimumSize(QSize(54, 25));
        directoryLabel->setMaximumSize(QSize(54, 25));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette12.setBrush(QPalette::Active, QPalette::Light, brush);
        palette12.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette12.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette12.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette12.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette12.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette12.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette12.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette12.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette12.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette12.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette12.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette12.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette12.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette12.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette12.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette12.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette12.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
        directoryLabel->setPalette(palette12);
        directoryLabel->setFont(font1);
        directoryLabel->setStyleSheet(QStringLiteral("color:rgb(0, 0, 0)"));
        directoryLabel->setWordWrap(true);

        horizontalLayout_3->addWidget(directoryLabel);

        horizontalSpacer_4 = new QSpacerItem(50, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        fileLocationTextEdit = new QLineEdit(layoutWidget2);
        fileLocationTextEdit->setObjectName(QStringLiteral("fileLocationTextEdit"));
        sizePolicy1.setHeightForWidth(fileLocationTextEdit->sizePolicy().hasHeightForWidth());
        fileLocationTextEdit->setSizePolicy(sizePolicy1);
        fileLocationTextEdit->setMinimumSize(QSize(133, 25));
        fileLocationTextEdit->setMaximumSize(QSize(133, 25));

        horizontalLayout_3->addWidget(fileLocationTextEdit);

        fileDirectoryButton = new QToolButton(layoutWidget2);
        fileDirectoryButton->setObjectName(QStringLiteral("fileDirectoryButton"));
        fileDirectoryButton->setMinimumSize(QSize(25, 25));
        fileDirectoryButton->setMaximumSize(QSize(25, 25));

        horizontalLayout_3->addWidget(fileDirectoryButton);


        verticalLayout_2->addLayout(horizontalLayout_3);

        receiveEditText = new QLineEdit(layoutWidget2);
        receiveEditText->setObjectName(QStringLiteral("receiveEditText"));
        receiveEditText->setMinimumSize(QSize(0, 25));
        receiveEditText->setMaximumSize(QSize(300, 16777215));

        verticalLayout_2->addWidget(receiveEditText);

        groupBox_3 = new QGroupBox(training);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(590, 10, 221, 221));
        groupBox_3->setStyleSheet(QStringLiteral("QGroupBox {  border: 1px solid #05B8CC;}"));
        poseFrame = new QFrame(groupBox_3);
        poseFrame->setObjectName(QStringLiteral("poseFrame"));
        poseFrame->setGeometry(QRect(10, 40, 201, 171));
        poseFrame->setStyleSheet(QStringLiteral(""));
        poseFrame->setFrameShape(QFrame::StyledPanel);
        poseFrame->setFrameShadow(QFrame::Raised);
        frame = new QFrame(groupBox_3);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 20, 201, 21));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(5,184, 204)"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        myoGestureLabel = new QLabel(frame);
        myoGestureLabel->setObjectName(QStringLiteral("myoGestureLabel"));
        myoGestureLabel->setGeometry(QRect(0, 0, 201, 21));
        QFont font2;
        font2.setPointSize(8);
        font2.setBold(true);
        font2.setWeight(75);
        myoGestureLabel->setFont(font2);
        myoGestureLabel->setStyleSheet(QStringLiteral("color:white"));
        myoGestureLabel->setAlignment(Qt::AlignCenter);
        m_tabForm->addTab(training, QString());
        classifier = new QWidget();
        classifier->setObjectName(QStringLiteral("classifier"));
        groupBox_5 = new QGroupBox(classifier);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(490, 10, 321, 91));
        groupBox_5->setStyleSheet(QStringLiteral("QGroupBox {  border: 1px solid #05B8CC;}"));
        layoutWidget3 = new QWidget(groupBox_5);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 20, 296, 62));
        verticalLayout = new QVBoxLayout(layoutWidget3);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        filenameLabel_4 = new QLabel(layoutWidget3);
        filenameLabel_4->setObjectName(QStringLiteral("filenameLabel_4"));
        sizePolicy.setHeightForWidth(filenameLabel_4->sizePolicy().hasHeightForWidth());
        filenameLabel_4->setSizePolicy(sizePolicy);
        filenameLabel_4->setMinimumSize(QSize(0, 25));
        filenameLabel_4->setMaximumSize(QSize(16777215, 25));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette13.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette13.setBrush(QPalette::Active, QPalette::Light, brush);
        palette13.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette13.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette13.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette13.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette13.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette13.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette13.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette13.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette13.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette13.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette13.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette13.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette13.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette13.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette13.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette13.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette13.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette13.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette13.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette13.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette13.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette13.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette13.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
        filenameLabel_4->setPalette(palette13);
        filenameLabel_4->setFont(font1);
        filenameLabel_4->setStyleSheet(QStringLiteral("color:rgb(0, 0, 0)"));
        filenameLabel_4->setWordWrap(true);

        horizontalLayout_9->addWidget(filenameLabel_4);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_7);

        classifierfileLocationTextEdit = new QLineEdit(layoutWidget3);
        classifierfileLocationTextEdit->setObjectName(QStringLiteral("classifierfileLocationTextEdit"));
        sizePolicy1.setHeightForWidth(classifierfileLocationTextEdit->sizePolicy().hasHeightForWidth());
        classifierfileLocationTextEdit->setSizePolicy(sizePolicy1);
        classifierfileLocationTextEdit->setMinimumSize(QSize(133, 25));
        classifierfileLocationTextEdit->setMaximumSize(QSize(133, 25));

        horizontalLayout_9->addWidget(classifierfileLocationTextEdit);

        classifierfileDirectoryButton = new QToolButton(layoutWidget3);
        classifierfileDirectoryButton->setObjectName(QStringLiteral("classifierfileDirectoryButton"));
        classifierfileDirectoryButton->setMinimumSize(QSize(25, 25));
        classifierfileDirectoryButton->setMaximumSize(QSize(25, 25));

        horizontalLayout_9->addWidget(classifierfileDirectoryButton);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        filenameLabel_5 = new QLabel(layoutWidget3);
        filenameLabel_5->setObjectName(QStringLiteral("filenameLabel_5"));
        sizePolicy1.setHeightForWidth(filenameLabel_5->sizePolicy().hasHeightForWidth());
        filenameLabel_5->setSizePolicy(sizePolicy1);
        filenameLabel_5->setMinimumSize(QSize(0, 25));
        filenameLabel_5->setMaximumSize(QSize(16777215, 25));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette14.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette14.setBrush(QPalette::Active, QPalette::Light, brush);
        palette14.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette14.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette14.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette14.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette14.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette14.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette14.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette14.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette14.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette14.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette14.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette14.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette14.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette14.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette14.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette14.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette14.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette14.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette14.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette14.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette14.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette14.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette14.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette14.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette14.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette14.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
        filenameLabel_5->setPalette(palette14);
        filenameLabel_5->setFont(font1);
        filenameLabel_5->setStyleSheet(QStringLiteral("color:rgb(0, 0, 0)"));
        filenameLabel_5->setWordWrap(true);

        horizontalLayout_10->addWidget(filenameLabel_5);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_8);

        modelfileLocationTextEdit = new QLineEdit(layoutWidget3);
        modelfileLocationTextEdit->setObjectName(QStringLiteral("modelfileLocationTextEdit"));
        sizePolicy1.setHeightForWidth(modelfileLocationTextEdit->sizePolicy().hasHeightForWidth());
        modelfileLocationTextEdit->setSizePolicy(sizePolicy1);
        modelfileLocationTextEdit->setMinimumSize(QSize(133, 25));
        modelfileLocationTextEdit->setMaximumSize(QSize(133, 25));

        horizontalLayout_10->addWidget(modelfileLocationTextEdit);

        modelfileDirectoryButton = new QToolButton(layoutWidget3);
        modelfileDirectoryButton->setObjectName(QStringLiteral("modelfileDirectoryButton"));
        modelfileDirectoryButton->setMinimumSize(QSize(25, 25));
        modelfileDirectoryButton->setMaximumSize(QSize(25, 25));

        horizontalLayout_10->addWidget(modelfileDirectoryButton);


        verticalLayout->addLayout(horizontalLayout_10);

        groupBox_6 = new QGroupBox(classifier);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 10, 471, 221));
        groupBox_6->setStyleSheet(QStringLiteral("QGroupBox {  border: 1px solid #05B8CC;}"));
        layoutWidget4 = new QWidget(groupBox_6);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 20, 244, 182));
        formLayout = new QFormLayout(layoutWidget4);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        filenameLabel_7 = new QLabel(layoutWidget4);
        filenameLabel_7->setObjectName(QStringLiteral("filenameLabel_7"));
        sizePolicy.setHeightForWidth(filenameLabel_7->sizePolicy().hasHeightForWidth());
        filenameLabel_7->setSizePolicy(sizePolicy);
        filenameLabel_7->setMinimumSize(QSize(0, 25));
        filenameLabel_7->setMaximumSize(QSize(16777215, 25));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette15.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette15.setBrush(QPalette::Active, QPalette::Light, brush);
        palette15.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette15.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette15.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette15.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette15.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette15.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette15.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette15.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette15.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette15.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette15.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette15.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette15.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette15.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette15.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette15.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette15.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
        filenameLabel_7->setPalette(palette15);
        filenameLabel_7->setFont(font1);
        filenameLabel_7->setStyleSheet(QStringLiteral("color:rgb(0, 0, 0)"));
        filenameLabel_7->setWordWrap(true);

        formLayout->setWidget(0, QFormLayout::LabelRole, filenameLabel_7);

        m_svmTypeCombobox = new QComboBox(layoutWidget4);
        m_svmTypeCombobox->setObjectName(QStringLiteral("m_svmTypeCombobox"));
        m_svmTypeCombobox->setMinimumSize(QSize(0, 25));

        formLayout->setWidget(0, QFormLayout::FieldRole, m_svmTypeCombobox);

        filenameLabel_6 = new QLabel(layoutWidget4);
        filenameLabel_6->setObjectName(QStringLiteral("filenameLabel_6"));
        sizePolicy.setHeightForWidth(filenameLabel_6->sizePolicy().hasHeightForWidth());
        filenameLabel_6->setSizePolicy(sizePolicy);
        filenameLabel_6->setMinimumSize(QSize(0, 25));
        filenameLabel_6->setMaximumSize(QSize(16777215, 25));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette16.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette16.setBrush(QPalette::Active, QPalette::Light, brush);
        palette16.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette16.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette16.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette16.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette16.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette16.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette16.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette16.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette16.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette16.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette16.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette16.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        palette16.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette16.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette16.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette16.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette16.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette16.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette16.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette16.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette16.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette16.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette16.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
        palette16.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette16.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette16.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette16.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette16.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette16.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette16.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette16.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette16.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette16.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette16.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
        filenameLabel_6->setPalette(palette16);
        filenameLabel_6->setFont(font1);
        filenameLabel_6->setStyleSheet(QStringLiteral("color:rgb(0, 0, 0)"));
        filenameLabel_6->setWordWrap(true);

        formLayout->setWidget(1, QFormLayout::LabelRole, filenameLabel_6);

        m_kernelCombobox = new QComboBox(layoutWidget4);
        m_kernelCombobox->setObjectName(QStringLiteral("m_kernelCombobox"));
        m_kernelCombobox->setMinimumSize(QSize(0, 25));

        formLayout->setWidget(1, QFormLayout::FieldRole, m_kernelCombobox);

        filenameLabel_8 = new QLabel(layoutWidget4);
        filenameLabel_8->setObjectName(QStringLiteral("filenameLabel_8"));
        sizePolicy.setHeightForWidth(filenameLabel_8->sizePolicy().hasHeightForWidth());
        filenameLabel_8->setSizePolicy(sizePolicy);
        filenameLabel_8->setMinimumSize(QSize(0, 25));
        filenameLabel_8->setMaximumSize(QSize(16777215, 25));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette17.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette17.setBrush(QPalette::Active, QPalette::Light, brush);
        palette17.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette17.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette17.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette17.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette17.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette17.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette17.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette17.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette17.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette17.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette17.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette17.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        palette17.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette17.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette17.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette17.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette17.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette17.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette17.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette17.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette17.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette17.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette17.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
        palette17.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette17.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette17.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette17.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette17.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette17.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette17.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette17.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette17.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette17.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette17.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
        filenameLabel_8->setPalette(palette17);
        filenameLabel_8->setFont(font1);
        filenameLabel_8->setStyleSheet(QStringLiteral("color:rgb(0, 0, 0)"));
        filenameLabel_8->setWordWrap(true);

        formLayout->setWidget(2, QFormLayout::LabelRole, filenameLabel_8);

        m_kernelDegreeLineEdit = new QLineEdit(layoutWidget4);
        m_kernelDegreeLineEdit->setObjectName(QStringLiteral("m_kernelDegreeLineEdit"));
        m_kernelDegreeLineEdit->setMinimumSize(QSize(0, 25));

        formLayout->setWidget(2, QFormLayout::FieldRole, m_kernelDegreeLineEdit);

        label = new QLabel(layoutWidget4);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(16, 16));
        label->setMaximumSize(QSize(16, 16));
        label->setStyleSheet(QStringLiteral("background-image: url(:/gamma.png)"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label);

        m_kernelGammaLineEdit = new QLineEdit(layoutWidget4);
        m_kernelGammaLineEdit->setObjectName(QStringLiteral("m_kernelGammaLineEdit"));
        m_kernelGammaLineEdit->setMinimumSize(QSize(0, 25));

        formLayout->setWidget(3, QFormLayout::FieldRole, m_kernelGammaLineEdit);

        filenameLabel_9 = new QLabel(layoutWidget4);
        filenameLabel_9->setObjectName(QStringLiteral("filenameLabel_9"));
        sizePolicy.setHeightForWidth(filenameLabel_9->sizePolicy().hasHeightForWidth());
        filenameLabel_9->setSizePolicy(sizePolicy);
        filenameLabel_9->setMinimumSize(QSize(0, 25));
        filenameLabel_9->setMaximumSize(QSize(16777215, 25));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette18.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette18.setBrush(QPalette::Active, QPalette::Light, brush);
        palette18.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette18.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette18.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette18.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette18.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette18.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette18.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette18.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette18.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette18.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette18.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette18.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        palette18.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette18.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette18.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette18.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette18.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette18.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette18.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette18.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette18.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette18.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette18.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
        palette18.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette18.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette18.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette18.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette18.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette18.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette18.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette18.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette18.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette18.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette18.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
        filenameLabel_9->setPalette(palette18);
        filenameLabel_9->setFont(font1);
        filenameLabel_9->setStyleSheet(QStringLiteral("color:rgb(0, 0, 0)"));
        filenameLabel_9->setWordWrap(true);

        formLayout->setWidget(4, QFormLayout::LabelRole, filenameLabel_9);

        m_kernelCoefLineEdit = new QLineEdit(layoutWidget4);
        m_kernelCoefLineEdit->setObjectName(QStringLiteral("m_kernelCoefLineEdit"));
        m_kernelCoefLineEdit->setMinimumSize(QSize(0, 25));

        formLayout->setWidget(4, QFormLayout::FieldRole, m_kernelCoefLineEdit);

        filenameLabel_10 = new QLabel(layoutWidget4);
        filenameLabel_10->setObjectName(QStringLiteral("filenameLabel_10"));
        sizePolicy.setHeightForWidth(filenameLabel_10->sizePolicy().hasHeightForWidth());
        filenameLabel_10->setSizePolicy(sizePolicy);
        filenameLabel_10->setMinimumSize(QSize(0, 25));
        filenameLabel_10->setMaximumSize(QSize(16777215, 25));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette19.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette19.setBrush(QPalette::Active, QPalette::Light, brush);
        palette19.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette19.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette19.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette19.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette19.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette19.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette19.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette19.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette19.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette19.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette19.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette19.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        palette19.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette19.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette19.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette19.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette19.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette19.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette19.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette19.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette19.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette19.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette19.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
        palette19.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette19.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette19.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette19.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette19.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette19.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette19.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette19.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette19.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette19.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette19.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
        filenameLabel_10->setPalette(palette19);
        filenameLabel_10->setFont(font1);
        filenameLabel_10->setStyleSheet(QStringLiteral("color:rgb(0, 0, 0)"));
        filenameLabel_10->setWordWrap(true);

        formLayout->setWidget(5, QFormLayout::LabelRole, filenameLabel_10);

        m_kernelCostLineEdit = new QLineEdit(layoutWidget4);
        m_kernelCostLineEdit->setObjectName(QStringLiteral("m_kernelCostLineEdit"));
        m_kernelCostLineEdit->setMinimumSize(QSize(0, 25));

        formLayout->setWidget(5, QFormLayout::FieldRole, m_kernelCostLineEdit);

        layoutWidget5 = new QWidget(groupBox_6);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(260, 10, 205, 194));
        verticalLayout_3 = new QVBoxLayout(layoutWidget5);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        filenameLabel_11 = new QLabel(layoutWidget5);
        filenameLabel_11->setObjectName(QStringLiteral("filenameLabel_11"));
        sizePolicy.setHeightForWidth(filenameLabel_11->sizePolicy().hasHeightForWidth());
        filenameLabel_11->setSizePolicy(sizePolicy);
        filenameLabel_11->setMinimumSize(QSize(0, 25));
        filenameLabel_11->setMaximumSize(QSize(16777215, 25));
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette20.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette20.setBrush(QPalette::Active, QPalette::Light, brush);
        palette20.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette20.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette20.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette20.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette20.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette20.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette20.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette20.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette20.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette20.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette20.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette20.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        palette20.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette20.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette20.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette20.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette20.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette20.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette20.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette20.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette20.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette20.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette20.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
        palette20.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette20.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette20.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette20.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette20.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette20.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette20.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette20.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette20.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette20.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette20.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
        filenameLabel_11->setPalette(palette20);
        filenameLabel_11->setFont(font1);
        filenameLabel_11->setStyleSheet(QStringLiteral("color:rgb(0, 0, 0)"));
        filenameLabel_11->setWordWrap(true);

        horizontalLayout_2->addWidget(filenameLabel_11);

        m_kernelNuLineEdit = new QLineEdit(layoutWidget5);
        m_kernelNuLineEdit->setObjectName(QStringLiteral("m_kernelNuLineEdit"));
        m_kernelNuLineEdit->setMinimumSize(QSize(0, 25));

        horizontalLayout_2->addWidget(m_kernelNuLineEdit);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        filenameLabel_12 = new QLabel(layoutWidget5);
        filenameLabel_12->setObjectName(QStringLiteral("filenameLabel_12"));
        sizePolicy.setHeightForWidth(filenameLabel_12->sizePolicy().hasHeightForWidth());
        filenameLabel_12->setSizePolicy(sizePolicy);
        filenameLabel_12->setMinimumSize(QSize(0, 25));
        filenameLabel_12->setMaximumSize(QSize(16777215, 25));
        QPalette palette21;
        palette21.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette21.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette21.setBrush(QPalette::Active, QPalette::Light, brush);
        palette21.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette21.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette21.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette21.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette21.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette21.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette21.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette21.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette21.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette21.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette21.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette21.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        palette21.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette21.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette21.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette21.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette21.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette21.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette21.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette21.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette21.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette21.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette21.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
        palette21.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette21.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette21.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette21.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette21.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette21.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette21.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette21.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette21.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette21.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette21.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
        filenameLabel_12->setPalette(palette21);
        filenameLabel_12->setFont(font1);
        filenameLabel_12->setStyleSheet(QStringLiteral("color:rgb(0, 0, 0)"));
        filenameLabel_12->setWordWrap(true);

        horizontalLayout_8->addWidget(filenameLabel_12);

        m_kernelCacheLineEdit = new QLineEdit(layoutWidget5);
        m_kernelCacheLineEdit->setObjectName(QStringLiteral("m_kernelCacheLineEdit"));
        m_kernelCacheLineEdit->setMinimumSize(QSize(0, 25));

        horizontalLayout_8->addWidget(m_kernelCacheLineEdit);


        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_2 = new QLabel(layoutWidget5);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(16, 16));
        label_2->setMaximumSize(QSize(16, 16));
        label_2->setStyleSheet(QStringLiteral("background-image: url(:/epsilon.png)"));

        horizontalLayout_11->addWidget(label_2);

        m_kernelEpsilonLineEdit = new QLineEdit(layoutWidget5);
        m_kernelEpsilonLineEdit->setObjectName(QStringLiteral("m_kernelEpsilonLineEdit"));
        m_kernelEpsilonLineEdit->setMinimumSize(QSize(0, 25));

        horizontalLayout_11->addWidget(m_kernelEpsilonLineEdit);


        verticalLayout_3->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        filenameLabel_13 = new QLabel(layoutWidget5);
        filenameLabel_13->setObjectName(QStringLiteral("filenameLabel_13"));
        sizePolicy1.setHeightForWidth(filenameLabel_13->sizePolicy().hasHeightForWidth());
        filenameLabel_13->setSizePolicy(sizePolicy1);
        filenameLabel_13->setMinimumSize(QSize(170, 25));
        filenameLabel_13->setMaximumSize(QSize(170, 25));
        QPalette palette22;
        palette22.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette22.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette22.setBrush(QPalette::Active, QPalette::Light, brush);
        palette22.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette22.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette22.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette22.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette22.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette22.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette22.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette22.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette22.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette22.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette22.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette22.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        palette22.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette22.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette22.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette22.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette22.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette22.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette22.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette22.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette22.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette22.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette22.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
        palette22.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette22.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette22.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette22.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette22.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette22.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette22.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette22.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette22.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette22.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette22.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette22.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette22.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette22.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette22.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
        filenameLabel_13->setPalette(palette22);
        filenameLabel_13->setFont(font1);
        filenameLabel_13->setStyleSheet(QStringLiteral("color:rgb(0, 0, 0)"));
        filenameLabel_13->setWordWrap(true);

        horizontalLayout_12->addWidget(filenameLabel_13);

        m_probabilityCheckBox = new QCheckBox(layoutWidget5);
        m_probabilityCheckBox->setObjectName(QStringLiteral("m_probabilityCheckBox"));
        sizePolicy1.setHeightForWidth(m_probabilityCheckBox->sizePolicy().hasHeightForWidth());
        m_probabilityCheckBox->setSizePolicy(sizePolicy1);
        m_probabilityCheckBox->setMinimumSize(QSize(25, 25));
        m_probabilityCheckBox->setMaximumSize(QSize(25, 25));

        horizontalLayout_12->addWidget(m_probabilityCheckBox);


        verticalLayout_3->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        filenameLabel_14 = new QLabel(layoutWidget5);
        filenameLabel_14->setObjectName(QStringLiteral("filenameLabel_14"));
        sizePolicy.setHeightForWidth(filenameLabel_14->sizePolicy().hasHeightForWidth());
        filenameLabel_14->setSizePolicy(sizePolicy);
        filenameLabel_14->setMinimumSize(QSize(0, 25));
        filenameLabel_14->setMaximumSize(QSize(16777215, 25));
        QPalette palette23;
        palette23.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette23.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette23.setBrush(QPalette::Active, QPalette::Light, brush);
        palette23.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette23.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette23.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette23.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette23.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette23.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette23.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette23.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette23.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette23.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette23.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette23.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        palette23.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette23.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette23.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette23.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette23.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette23.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette23.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette23.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette23.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette23.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette23.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
        palette23.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette23.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette23.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette23.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette23.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette23.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette23.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette23.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette23.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette23.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette23.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette23.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette23.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette23.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette23.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
        filenameLabel_14->setPalette(palette23);
        filenameLabel_14->setFont(font1);
        filenameLabel_14->setStyleSheet(QStringLiteral("color:rgb(0, 0, 0)"));
        filenameLabel_14->setWordWrap(true);

        horizontalLayout_13->addWidget(filenameLabel_14);

        m_shrinkCheckBox = new QCheckBox(layoutWidget5);
        m_shrinkCheckBox->setObjectName(QStringLiteral("m_shrinkCheckBox"));
        sizePolicy1.setHeightForWidth(m_shrinkCheckBox->sizePolicy().hasHeightForWidth());
        m_shrinkCheckBox->setSizePolicy(sizePolicy1);
        m_shrinkCheckBox->setMinimumSize(QSize(25, 25));
        m_shrinkCheckBox->setMaximumSize(QSize(25, 25));

        horizontalLayout_13->addWidget(m_shrinkCheckBox);


        verticalLayout_3->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        filenameLabel_15 = new QLabel(layoutWidget5);
        filenameLabel_15->setObjectName(QStringLiteral("filenameLabel_15"));
        sizePolicy.setHeightForWidth(filenameLabel_15->sizePolicy().hasHeightForWidth());
        filenameLabel_15->setSizePolicy(sizePolicy);
        filenameLabel_15->setMinimumSize(QSize(0, 25));
        filenameLabel_15->setMaximumSize(QSize(16777215, 25));
        QPalette palette24;
        palette24.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette24.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette24.setBrush(QPalette::Active, QPalette::Light, brush);
        palette24.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette24.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette24.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette24.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette24.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette24.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette24.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette24.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette24.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette24.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette24.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette24.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        palette24.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette24.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette24.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette24.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette24.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette24.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette24.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette24.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette24.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette24.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette24.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
        palette24.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette24.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette24.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette24.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette24.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette24.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette24.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette24.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette24.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette24.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette24.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette24.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette24.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette24.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette24.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
        filenameLabel_15->setPalette(palette24);
        filenameLabel_15->setFont(font1);
        filenameLabel_15->setStyleSheet(QStringLiteral("color:rgb(0, 0, 0)"));
        filenameLabel_15->setWordWrap(true);

        horizontalLayout_14->addWidget(filenameLabel_15);

        m_kernelCrossLineEdit = new QLineEdit(layoutWidget5);
        m_kernelCrossLineEdit->setObjectName(QStringLiteral("m_kernelCrossLineEdit"));
        sizePolicy.setHeightForWidth(m_kernelCrossLineEdit->sizePolicy().hasHeightForWidth());
        m_kernelCrossLineEdit->setSizePolicy(sizePolicy);
        m_kernelCrossLineEdit->setMinimumSize(QSize(0, 25));

        horizontalLayout_14->addWidget(m_kernelCrossLineEdit);


        verticalLayout_3->addLayout(horizontalLayout_14);

        groupBox_9 = new QGroupBox(classifier);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setGeometry(QRect(490, 100, 321, 131));
        groupBox_9->setStyleSheet(QStringLiteral("QGroupBox {  border: 1px solid #05B8CC;}"));
        console1 = new QTextBrowser(groupBox_9);
        console1->setObjectName(QStringLiteral("console1"));
        console1->setGeometry(QRect(10, 20, 301, 71));
        console1->setStyleSheet(QLatin1String("font: 8pt \"MS Shell Dlg 2\";\n"
"color:#05B8CC"));
        m_callSVMButton = new QPushButton(groupBox_9);
        m_callSVMButton->setObjectName(QStringLiteral("m_callSVMButton"));
        m_callSVMButton->setGeometry(QRect(160, 100, 75, 23));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        m_callSVMButton->setFont(font3);
        m_callSVMButton->setStyleSheet(QStringLiteral(" background-color: #05B8CC; color: white;"));
        m_clearTrainButton = new QPushButton(groupBox_9);
        m_clearTrainButton->setObjectName(QStringLiteral("m_clearTrainButton"));
        m_clearTrainButton->setGeometry(QRect(240, 100, 75, 23));
        m_clearTrainButton->setFont(font3);
        m_clearTrainButton->setStyleSheet(QStringLiteral(" background-color: #05B8CC; color: white;"));
        m_tabForm->addTab(classifier, QString());
        testTab = new QWidget();
        testTab->setObjectName(QStringLiteral("testTab"));
        groupBox_7 = new QGroupBox(testTab);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(10, 10, 281, 121));
        groupBox_7->setStyleSheet(QStringLiteral("QGroupBox {  border: 1px solid #05B8CC;}"));
        layoutWidget6 = new QWidget(groupBox_7);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(10, 20, 265, 95));
        verticalLayout_4 = new QVBoxLayout(layoutWidget6);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        filenameLabel_16 = new QLabel(layoutWidget6);
        filenameLabel_16->setObjectName(QStringLiteral("filenameLabel_16"));
        sizePolicy.setHeightForWidth(filenameLabel_16->sizePolicy().hasHeightForWidth());
        filenameLabel_16->setSizePolicy(sizePolicy);
        filenameLabel_16->setMinimumSize(QSize(0, 25));
        filenameLabel_16->setMaximumSize(QSize(16777215, 25));
        QPalette palette25;
        palette25.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette25.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette25.setBrush(QPalette::Active, QPalette::Light, brush);
        palette25.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette25.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette25.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette25.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette25.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette25.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette25.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette25.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette25.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette25.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette25.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette25.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        palette25.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette25.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette25.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette25.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette25.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette25.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette25.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette25.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette25.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette25.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette25.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
        palette25.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette25.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette25.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette25.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette25.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette25.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette25.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette25.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette25.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette25.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette25.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette25.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette25.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette25.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette25.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
        filenameLabel_16->setPalette(palette25);
        filenameLabel_16->setFont(font1);
        filenameLabel_16->setStyleSheet(QStringLiteral("color:rgb(0, 0, 0)"));
        filenameLabel_16->setWordWrap(true);

        horizontalLayout_15->addWidget(filenameLabel_16);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_9);

        testFileLocationTextEdit = new QLineEdit(layoutWidget6);
        testFileLocationTextEdit->setObjectName(QStringLiteral("testFileLocationTextEdit"));
        sizePolicy1.setHeightForWidth(testFileLocationTextEdit->sizePolicy().hasHeightForWidth());
        testFileLocationTextEdit->setSizePolicy(sizePolicy1);
        testFileLocationTextEdit->setMinimumSize(QSize(133, 25));
        testFileLocationTextEdit->setMaximumSize(QSize(133, 25));

        horizontalLayout_15->addWidget(testFileLocationTextEdit);

        testFileDirectoryButton = new QToolButton(layoutWidget6);
        testFileDirectoryButton->setObjectName(QStringLiteral("testFileDirectoryButton"));
        testFileDirectoryButton->setMinimumSize(QSize(25, 25));
        testFileDirectoryButton->setMaximumSize(QSize(25, 25));

        horizontalLayout_15->addWidget(testFileDirectoryButton);


        verticalLayout_4->addLayout(horizontalLayout_15);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        filenameLabel_18 = new QLabel(layoutWidget6);
        filenameLabel_18->setObjectName(QStringLiteral("filenameLabel_18"));
        sizePolicy.setHeightForWidth(filenameLabel_18->sizePolicy().hasHeightForWidth());
        filenameLabel_18->setSizePolicy(sizePolicy);
        filenameLabel_18->setMinimumSize(QSize(0, 25));
        filenameLabel_18->setMaximumSize(QSize(16777215, 25));
        QPalette palette26;
        palette26.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette26.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette26.setBrush(QPalette::Active, QPalette::Light, brush);
        palette26.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette26.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette26.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette26.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette26.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette26.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette26.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette26.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette26.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette26.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette26.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette26.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        palette26.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette26.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette26.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette26.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette26.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette26.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette26.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette26.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette26.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette26.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette26.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette26.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette26.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette26.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette26.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
        palette26.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette26.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette26.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette26.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette26.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette26.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette26.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette26.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette26.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette26.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette26.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette26.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette26.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette26.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette26.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
        filenameLabel_18->setPalette(palette26);
        filenameLabel_18->setFont(font1);
        filenameLabel_18->setStyleSheet(QStringLiteral("color:rgb(0, 0, 0)"));
        filenameLabel_18->setWordWrap(true);

        horizontalLayout_7->addWidget(filenameLabel_18);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_11);

        modelPredictFileLocationTextEdit = new QLineEdit(layoutWidget6);
        modelPredictFileLocationTextEdit->setObjectName(QStringLiteral("modelPredictFileLocationTextEdit"));
        sizePolicy1.setHeightForWidth(modelPredictFileLocationTextEdit->sizePolicy().hasHeightForWidth());
        modelPredictFileLocationTextEdit->setSizePolicy(sizePolicy1);
        modelPredictFileLocationTextEdit->setMinimumSize(QSize(133, 25));
        modelPredictFileLocationTextEdit->setMaximumSize(QSize(133, 25));

        horizontalLayout_7->addWidget(modelPredictFileLocationTextEdit);

        modelPredictFileDirectoryButton = new QToolButton(layoutWidget6);
        modelPredictFileDirectoryButton->setObjectName(QStringLiteral("modelPredictFileDirectoryButton"));
        modelPredictFileDirectoryButton->setMinimumSize(QSize(25, 25));
        modelPredictFileDirectoryButton->setMaximumSize(QSize(25, 25));

        horizontalLayout_7->addWidget(modelPredictFileDirectoryButton);


        verticalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        filenameLabel_17 = new QLabel(layoutWidget6);
        filenameLabel_17->setObjectName(QStringLiteral("filenameLabel_17"));
        sizePolicy1.setHeightForWidth(filenameLabel_17->sizePolicy().hasHeightForWidth());
        filenameLabel_17->setSizePolicy(sizePolicy1);
        filenameLabel_17->setMinimumSize(QSize(0, 25));
        filenameLabel_17->setMaximumSize(QSize(16777215, 25));
        QPalette palette27;
        palette27.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette27.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette27.setBrush(QPalette::Active, QPalette::Light, brush);
        palette27.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette27.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette27.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette27.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette27.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette27.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette27.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette27.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette27.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette27.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette27.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette27.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        palette27.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette27.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette27.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette27.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette27.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette27.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette27.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette27.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette27.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette27.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette27.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
        palette27.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette27.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette27.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette27.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette27.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette27.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette27.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette27.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette27.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette27.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette27.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette27.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette27.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette27.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette27.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
        filenameLabel_17->setPalette(palette27);
        filenameLabel_17->setFont(font1);
        filenameLabel_17->setStyleSheet(QStringLiteral("color:rgb(0, 0, 0)"));
        filenameLabel_17->setWordWrap(true);

        horizontalLayout_16->addWidget(filenameLabel_17);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_10);

        predictionFileLocationTextEdit = new QLineEdit(layoutWidget6);
        predictionFileLocationTextEdit->setObjectName(QStringLiteral("predictionFileLocationTextEdit"));
        sizePolicy1.setHeightForWidth(predictionFileLocationTextEdit->sizePolicy().hasHeightForWidth());
        predictionFileLocationTextEdit->setSizePolicy(sizePolicy1);
        predictionFileLocationTextEdit->setMinimumSize(QSize(133, 25));
        predictionFileLocationTextEdit->setMaximumSize(QSize(133, 25));

        horizontalLayout_16->addWidget(predictionFileLocationTextEdit);

        predictFileDirectoryButton = new QToolButton(layoutWidget6);
        predictFileDirectoryButton->setObjectName(QStringLiteral("predictFileDirectoryButton"));
        predictFileDirectoryButton->setMinimumSize(QSize(25, 25));
        predictFileDirectoryButton->setMaximumSize(QSize(25, 25));

        horizontalLayout_16->addWidget(predictFileDirectoryButton);


        verticalLayout_4->addLayout(horizontalLayout_16);

        groupBox_8 = new QGroupBox(testTab);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(10, 130, 281, 101));
        groupBox_8->setStyleSheet(QStringLiteral("QGroupBox {  border: 1px solid #05B8CC;}"));
        console2 = new QTextBrowser(groupBox_8);
        console2->setObjectName(QStringLiteral("console2"));
        console2->setGeometry(QRect(10, 20, 261, 41));
        console2->setStyleSheet(QLatin1String("font: 8pt \"MS Shell Dlg 2\";\n"
"color:#05B8CC"));
        m_clearResultsButton = new QPushButton(groupBox_8);
        m_clearResultsButton->setObjectName(QStringLiteral("m_clearResultsButton"));
        m_clearResultsButton->setGeometry(QRect(200, 70, 75, 23));
        m_clearResultsButton->setFont(font3);
        m_clearResultsButton->setStyleSheet(QStringLiteral(" background-color: #05B8CC; color: white;"));
        m_classifierSVMButton = new QPushButton(groupBox_8);
        m_classifierSVMButton->setObjectName(QStringLiteral("m_classifierSVMButton"));
        m_classifierSVMButton->setGeometry(QRect(120, 70, 75, 23));
        m_classifierSVMButton->setFont(font3);
        m_classifierSVMButton->setStyleSheet(QStringLiteral(" background-color: #05B8CC; color: white;"));
        m_tabForm->addTab(testTab, QString());
        layoutWidget7 = new QWidget(centralWidget);
        layoutWidget7->setObjectName(QStringLiteral("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(1081, 250, 248, 17));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_emg5_2 = new QLabel(layoutWidget7);
        label_emg5_2->setObjectName(QStringLiteral("label_emg5_2"));
        label_emg5_2->setMinimumSize(QSize(10, 0));
        QPalette palette28;
        palette28.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette28.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette28.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_emg5_2->setPalette(palette28);
        QFont font4;
        font4.setPointSize(12);
        label_emg5_2->setFont(font4);
        label_emg5_2->setTextFormat(Qt::RichText);
        label_emg5_2->setWordWrap(true);

        horizontalLayout_6->addWidget(label_emg5_2);

        axeY_2 = new QFrame(layoutWidget7);
        axeY_2->setObjectName(QStringLiteral("axeY_2"));
        axeY_2->setMinimumSize(QSize(15, 15));
        axeY_2->setMaximumSize(QSize(15, 15));
        axeY_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0)"));
        axeY_2->setFrameShape(QFrame::StyledPanel);
        axeY_2->setFrameShadow(QFrame::Raised);

        horizontalLayout_6->addWidget(axeY_2);

        label_emg5_3 = new QLabel(layoutWidget7);
        label_emg5_3->setObjectName(QStringLiteral("label_emg5_3"));
        label_emg5_3->setMinimumSize(QSize(40, 15));
        label_emg5_3->setMaximumSize(QSize(40, 15));
        QPalette palette29;
        palette29.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette29.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette29.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_emg5_3->setPalette(palette29);
        label_emg5_3->setFont(font4);
        label_emg5_3->setTextFormat(Qt::RichText);
        label_emg5_3->setWordWrap(true);

        horizontalLayout_6->addWidget(label_emg5_3);

        axeY = new QFrame(layoutWidget7);
        axeY->setObjectName(QStringLiteral("axeY"));
        axeY->setMinimumSize(QSize(15, 15));
        axeY->setMaximumSize(QSize(15, 15));
        axeY->setStyleSheet(QStringLiteral("background-color: rgb(0, 255, 0)"));
        axeY->setFrameShape(QFrame::StyledPanel);
        axeY->setFrameShadow(QFrame::Raised);

        horizontalLayout_6->addWidget(axeY);

        label_emg5_4 = new QLabel(layoutWidget7);
        label_emg5_4->setObjectName(QStringLiteral("label_emg5_4"));
        label_emg5_4->setMinimumSize(QSize(40, 15));
        label_emg5_4->setMaximumSize(QSize(40, 15));
        QPalette palette30;
        palette30.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette30.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette30.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_emg5_4->setPalette(palette30);
        label_emg5_4->setFont(font4);
        label_emg5_4->setTextFormat(Qt::RichText);
        label_emg5_4->setWordWrap(true);

        horizontalLayout_6->addWidget(label_emg5_4);

        axeX = new QFrame(layoutWidget7);
        axeX->setObjectName(QStringLiteral("axeX"));
        axeX->setMinimumSize(QSize(15, 15));
        axeX->setMaximumSize(QSize(15, 15));
        axeX->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 255)"));
        axeX->setFrameShape(QFrame::StyledPanel);
        axeX->setFrameShadow(QFrame::Raised);

        horizontalLayout_6->addWidget(axeX);

        label_emg5_5 = new QLabel(layoutWidget7);
        label_emg5_5->setObjectName(QStringLiteral("label_emg5_5"));
        label_emg5_5->setMinimumSize(QSize(40, 15));
        label_emg5_5->setMaximumSize(QSize(40, 15));
        QPalette palette31;
        palette31.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette31.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette31.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_emg5_5->setPalette(palette31);
        label_emg5_5->setFont(font4);
        label_emg5_5->setTextFormat(Qt::RichText);
        label_emg5_5->setWordWrap(true);

        horizontalLayout_6->addWidget(label_emg5_5);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1360, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        m_tabForm->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Aplica\303\247\303\243o", 0));
        openCloseButton->setText(QApplication::translate("MainWindow", "Conectar", 0));
        emgGroupbox->setTitle(QApplication::translate("MainWindow", "Canais de Eletromiograma e IMU", 0));
        label_emg4_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#000000;\">Aceler\303\264metro</span></p></body></html>", 0));
        label_emg4_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#000000;\">Girosc\303\263pio</span></p></body></html>", 0));
        label_emg2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#000000;\">EMG 2</span></p></body></html>", 0));
        label_emg3->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#000000;\">EMG 3</span></p></body></html>", 0));
        label_emg4->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#000000;\">EMG 4</span></p></body></html>", 0));
        label_emg1->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#000000;\">EMG 1</span></p></body></html>", 0));
        label_emg5->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#000000;\">EMG 5</span></p></body></html>", 0));
        label_emg6->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#000000;\">EMG 6</span></p></body></html>", 0));
        label_emg4_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#000000;\">EMG 8</span></p></body></html>", 0));
        label_emg7->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#000000;\">EMG 7</span></p></body></html>", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Grava\303\247\303\243o de Gestos", 0));
        m_progressBar->setFormat(QApplication::translate("MainWindow", "Gravando...", 0));
        m_gestureGif->setText(QString());
#ifndef QT_NO_TOOLTIP
        m_recordGestureButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Gravar Gesto</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        m_recordGestureButton->setText(QString());
        m_gestureTrainComboBox->clear();
        m_gestureTrainComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Repouso", 0)
         << QApplication::translate("MainWindow", "M\303\243o Fechada", 0)
         << QApplication::translate("MainWindow", "M\303\243o para dentro", 0)
         << QApplication::translate("MainWindow", "M\303\243o para fora", 0)
         << QApplication::translate("MainWindow", "M\303\243o aberta", 0)
         << QApplication::translate("MainWindow", "Duplo click com dedo", 0)
        );
        m_sessionLabel->setText(QApplication::translate("MainWindow", "Registro n\302\272: %1", 0));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Arquivo de Sa\303\255da", 0));
        filenameLabel_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">Tipo:</span></p></body></html>", 0));
        m_typeComboBox->clear();
        m_typeComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Treinamento", 0)
         << QApplication::translate("MainWindow", "Teste", 0)
        );
        filenameLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:8pt;\">Nome do Arquivo:</span></p></body></html>", 0));
        fileNameTextEdit->setText(QApplication::translate("MainWindow", "arquivo", 0));
        directoryLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">Diret\303\263rio:</span></p></body></html>", 0));
        fileLocationTextEdit->setText(QString());
        fileDirectoryButton->setText(QApplication::translate("MainWindow", "...", 0));
        receiveEditText->setText(QString());
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Gestos Myo", 0));
        myoGestureLabel->setText(QString());
        m_tabForm->setTabText(m_tabForm->indexOf(training), QApplication::translate("MainWindow", "Aquisi\303\247\303\243o de dados", 0));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Arquivos de Entrada e Sa\303\255da", 0));
        filenameLabel_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p> Treinamento:</p></body></html>", 0));
        classifierfileLocationTextEdit->setText(QString());
        classifierfileDirectoryButton->setText(QApplication::translate("MainWindow", "...", 0));
        filenameLabel_5->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Modelo Gerado:</p></body></html>", 0));
        modelfileLocationTextEdit->setText(QString());
        modelfileDirectoryButton->setText(QApplication::translate("MainWindow", "...", 0));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Param\303\252tros de Treinamento", 0));
        filenameLabel_7->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Tipo de SVM:</p></body></html>", 0));
        m_svmTypeCombobox->clear();
        m_svmTypeCombobox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "C-SVC", 0)
         << QApplication::translate("MainWindow", "nu-SVC", 0)
        );
        filenameLabel_6->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Fun\303\247\303\243o Kernel:</p></body></html>", 0));
        m_kernelCombobox->clear();
        m_kernelCombobox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Linear", 0)
         << QApplication::translate("MainWindow", "Polinomial", 0)
         << QApplication::translate("MainWindow", "Fun\303\247\303\243o de Base Radial (RBF)", 0)
         << QApplication::translate("MainWindow", "Sigmoid", 0)
         << QApplication::translate("MainWindow", "Pr\303\251 computado", 0)
        );
        filenameLabel_8->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Grau:</p></body></html>", 0));
        m_kernelDegreeLineEdit->setInputMask(QString());
        m_kernelDegreeLineEdit->setText(QString());
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("MainWindow", "Gamma", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QString());
        m_kernelGammaLineEdit->setInputMask(QString());
        m_kernelGammaLineEdit->setText(QString());
        filenameLabel_9->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Coef0:</p></body></html>", 0));
        m_kernelCoefLineEdit->setInputMask(QString());
        m_kernelCoefLineEdit->setText(QString());
        filenameLabel_10->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Custo:</p></body></html>", 0));
        m_kernelCostLineEdit->setInputMask(QString());
        m_kernelCostLineEdit->setText(QString());
        filenameLabel_11->setText(QApplication::translate("MainWindow", "<html><head/><body><p>nu:</p></body></html>", 0));
        m_kernelNuLineEdit->setInputMask(QString());
        m_kernelNuLineEdit->setText(QString());
        filenameLabel_12->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Cache (MB):</p></body></html>", 0));
        m_kernelCacheLineEdit->setInputMask(QString());
        m_kernelCacheLineEdit->setText(QString());
#ifndef QT_NO_TOOLTIP
        label_2->setToolTip(QApplication::translate("MainWindow", "Epsilon", 0));
#endif // QT_NO_TOOLTIP
        label_2->setText(QString());
        m_kernelEpsilonLineEdit->setInputMask(QString());
        m_kernelEpsilonLineEdit->setText(QString());
        filenameLabel_13->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Estimativa de Probabilidade:</p></body></html>", 0));
        m_probabilityCheckBox->setText(QString());
        filenameLabel_14->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Heur\303\255stica Shrinking:</p></body></html>", 0));
        m_shrinkCheckBox->setText(QString());
        filenameLabel_15->setText(QApplication::translate("MainWindow", "<html><head/><body><p>N-Fold Cross Validation:</p></body></html>", 0));
        m_kernelCrossLineEdit->setInputMask(QString());
        m_kernelCrossLineEdit->setText(QString());
        groupBox_9->setTitle(QApplication::translate("MainWindow", "Logs: Treinamento", 0));
        m_callSVMButton->setText(QApplication::translate("MainWindow", "Treinar", 0));
        m_clearTrainButton->setText(QApplication::translate("MainWindow", "Limpar", 0));
        m_tabForm->setTabText(m_tabForm->indexOf(classifier), QApplication::translate("MainWindow", "Classificador", 0));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "Arquivos de Entrada e Sa\303\255da", 0));
        filenameLabel_16->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Teste:</p></body></html>", 0));
        testFileLocationTextEdit->setText(QString());
        testFileDirectoryButton->setText(QApplication::translate("MainWindow", "...", 0));
        filenameLabel_18->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Modelo:</p></body></html>", 0));
        modelPredictFileLocationTextEdit->setText(QString());
        modelPredictFileDirectoryButton->setText(QApplication::translate("MainWindow", "...", 0));
        filenameLabel_17->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Predi\303\247\303\243o:</p></body></html>", 0));
        predictionFileLocationTextEdit->setText(QString());
        predictFileDirectoryButton->setText(QApplication::translate("MainWindow", "...", 0));
        groupBox_8->setTitle(QApplication::translate("MainWindow", "Logs: Resultado", 0));
        m_clearResultsButton->setText(QApplication::translate("MainWindow", "Limpar", 0));
        m_classifierSVMButton->setText(QApplication::translate("MainWindow", "Classificar", 0));
        m_tabForm->setTabText(m_tabForm->indexOf(testTab), QApplication::translate("MainWindow", "Testes", 0));
        label_emg5_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:8pt; color:#00007f;\">Legenda:</span></p></body></html>", 0));
        label_emg5_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:8pt; color:#00007f;\">Eixo X</span></p></body></html>", 0));
        label_emg5_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:8pt; color:#00007f;\">Eixo Y</span></p></body></html>", 0));
        label_emg5_5->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:8pt; color:#00007f;\">Eixo Z</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
