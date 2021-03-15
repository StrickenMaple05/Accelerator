#-------------------------------------------------
#
# Project created by QtCreator 2019-11-23T18:54:54
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Accelerator
TEMPLATE = app


SOURCES += main.cpp\
        accelerator.cpp \
    autorization.cpp \
    user.cpp \
    edit_data.cpp \
    about.cpp

HEADERS  += accelerator.h \
    autorization.h \
    user.h \
    edit_data.h \
    about.h

FORMS    += accelerator.ui \
    autorization.ui \
    user.ui \
    edit_data.ui \
    about.ui

RESOURCES += \
    images.qrc \
    Keyboard.qrc
