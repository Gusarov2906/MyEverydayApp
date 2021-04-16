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
    QString getCurLocation();
    QTime getCurTime();
    Temperature getCurTemperature();
    QString getDescription();
    Temperature getFeelingTemperature();
    QString getHumidity();
    QString getPreassure();
    Temperature getTemperatureAt3();
    Temperature getTemperatureAt9();
    Temperature getTemperatureAt15();
    Temperature getTemperatureAt21();
private:
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
