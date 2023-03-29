#-------------------------------------------------
#
# Project created by QtCreator 2014-02-26T16:51:17
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

TEMPLATE = app

SOURCES += main.cpp\
        View/mainview.cpp \
    View/setuptab.cpp \
    startup.cpp \
    utils.cpp


HEADERS  += View/mainview.h \
    View/setuptab.h \
    startup.h \
    utils.h

FORMS    += View/mainview.ui \
    View/setuptab.ui

RESOURCES += \
    VfpResources.qrc

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
