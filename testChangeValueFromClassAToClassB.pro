#-------------------------------------------------
#
# Project created by QtCreator 2015-06-11T14:10:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = testChangeValueFromClassAToClassB
TEMPLATE = app


SOURCES += main.cpp\
        classa.cpp \
    classb.cpp

HEADERS  += classa.h \
    classb.h

CONFIG += mobility
MOBILITY = 

