#ifndef WEATHERTODAYWIDGETCONTROLLER_H
#define WEATHERTODAYWIDGETCONTROLLER_H
#include <QObject>

#include "weathertodaydata.h"
#include "parser.h"

class WeatherTodayWidgetController: public QObject
{
public:
    WeatherTodayWidgetController();
    void startUpdateLoop();
    void stopUpdateLoop();
signals:
    WeatherTodayData update();
private:
    WeatherTodayData weatherTodayData;
    Parser parser;
    bool flagToStop;
};

#endif // WEATHERTODAYWIDGETCONTROLLER_H
