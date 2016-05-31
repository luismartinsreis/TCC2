#-------------------------------------------------
#
# Luís Antônio Martins dos Reis
#
#-------------------------------------------------


QT       += core gui widgets
CONFIG   += qwt c++11

greaterThan(QT_MAJOR_VERSION, 4): QT +=

TARGET = qtMyoBandReadEMG
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp



HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

win32 {message("Using win32 configuration")

QWT_LOCATION = C:\qwt-6.1.2 # Qwt location (must match exactly to where you unzip the files)
INCLUDEPATH += $${QWT_LOCATION}/src
LIBS = -L$${QWT_LOCATION}/lib\-lqwt

DEFINES += QWT_DLL


MYO_PATH = "C:\myo-sdk-win-0.9.0"
INCLUDEPATH += "$$MYO_PATH\include"
LIBS_PATH += "$$MYO_PATH\Lib"
    CONFIG(debug, debug|release) {
    LIBS     += -L$$LIBS_PATH \
		-lmyo32
    }
    CONFIG(release, debug|release) {
    LIBS     += -L$$LIBS_PATH \
		-lmyo32
    }

target.path = C:\Users\LuisAntonio\Desktop\qtMyoBandReadEMG_v2
INSTALLS += target

}

RESOURCES += \
    img/gestosMyo.qrc

DISTFILES +=
