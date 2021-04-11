#ifndef WEATHERTODAYDATA_H
#define WEATHERTODAYDATA_H
#include <QString>
#include <QTime>
#include "temperature.h"

class WeatherTodayData
{
public:
    WeatherTodayData();
    WeatherTodayData(QString curLocation, QTime curTime, Temperature curTemperature,
                     QString description, Temperature feelingTemperature,
                     QString humidity, QString preassure, Temperature temperatureAt3,
                     Temperature temperatureAt9, Temperature temperatureAt15, Temperature temperatureAt21);
    QString curLocation;
    QTime curTime;
    Temperature curTemperature;
    QString description;
    Temperature feelingTemperature;
    QString humidity;
    QString preassure;
    Temperature temperatureAt3;
    Temperature temperatureAt9;
    Temperature temperatureAt15;
    Temperature temperatureAt21;
};

#endif // WEATHERTODAYDATA_H
