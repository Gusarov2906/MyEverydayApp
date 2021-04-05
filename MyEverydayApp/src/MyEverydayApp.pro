QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    AbstractWidget.cpp \
    CompanySharesWidget.cpp \
    CurrentExchangeRateWidget.cpp \
    NewsWidget.cpp \
    NotesWidget.cpp \
    TimeAndDateWidget.cpp \
    WeatherTodayWidget.cpp \
    WeatherWeeklyWidget.cpp \
    WelcomeWidget.cpp \
    WidgetCreator.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    AbstractWidget.h \
    CompanySharesWidget.h \
    CurrentExchangeRateWidget.h \
    NewsWidget.h \
    NotesWidget.h \
    TimeAndDateWidget.h \
    WeatherTodayWidget.h \
    WeatherWeeklyWidget.h \
    WelcomeWidget.h \
    WidgetCreator.h \
    mainwindow.h

FORMS += \
    CompanySharesWidget.ui \
    CurrentExchangeRateWidgetui.ui \
    NewsWidget.ui \
    NotesWidget.ui \
    TimeAndDateWidget.ui \
    WeatherTodayWidget.ui \
    WeatherWeeklyWidget.ui \
    WelcomeWidget.ui \
    mainwindow.ui

TRANSLATIONS += \
    MyEverydayApp_en_GB.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Icons.qrc
