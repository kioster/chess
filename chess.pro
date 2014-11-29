#-------------------------------------------------
#
# Project created by QtCreator 2014-06-30T09:11:08
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = chess
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    plate.cpp \
    qi.cpp

HEADERS  += mainwindow.h \
    qi.h

FORMS    += mainwindow.ui

RESOURCES += \
    resource.qrc
