#-------------------------------------------------
#
# Project created by QtCreator 2016-07-31T23:35:28
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = EyeEx01
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    ClassA.cpp \
    ClassB.cpp

HEADERS  += widget.h \
    ClassA.h \
    ClassB.h

FORMS    += widget.ui \
    ClassA.ui \
    ClassB.ui
