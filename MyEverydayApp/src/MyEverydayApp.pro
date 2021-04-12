QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++14

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    abstractwidget.cpp \
    companyshareswidget.cpp \
    currentexchangeratewidget.cpp \
    dbworker.cpp \
    main.cpp \
    mainwindow.cpp \
    newswidget.cpp \
    noteswidget.cpp \
    parser.cpp \
    temperature.cpp \
    timeanddatewidget.cpp \
    weathertodaydata.cpp \
    weathertodaywidget.cpp \
    weathertodaywidgetcontroller.cpp \
    weatherweeklywidget.cpp \
    welcomewidget.cpp \
    widgetcreator.cpp \
    widgetspace.cpp

HEADERS += \
    abstractwidget.h \
    companyshareswidget.h \
    currentexchangeratewidget.h \
    dbworker.h \
    parser.h \
    temperature.h \
    weathertodaywidgetcontroller.h \
    widgetspace.h \
    mainwindow.h \
    newswidget.h \
    noteswidget.h \
    timeanddatewidget.h \
    weathertodaydata.h \
    weathertodaywidget.h \
    weatherweeklywidget.h \
    welcomewidget.h \
    widgetcreator.h

FORMS += \
    companyshareswidget.ui \
    currentechangeratewidgetui.ui \
    mainwindow.ui \
    newswidget.ui \
    noteswidget.ui \
    timeanddatewidget.ui \
    weathertodaywidget.ui \
    weatherweeklywidget.ui \
    welcomewidget.ui

TRANSLATIONS += \
    MyEverydayApp_en_GB.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    database.qrc \
    icons.qrc
