QT += core
QT -= gui

CONFIG += c++11

TARGET = qt_cpp_hello
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    cat.cpp

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

HEADERS += \
    test.h \
    cat.h

# The following lines tells Qmake to use pkg-config for opencv
QT_CONFIG -= no-pkg-config
CONFIG  += link_pkgconfig
PKGCONFIG += opencv

DISTFILES += \
    ../../opencv/build/lib/libopencv_core.2.4.13.dylib
