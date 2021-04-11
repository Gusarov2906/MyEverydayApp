#include "weathertodaydata.h"

WeatherTodayData::WeatherTodayData()
{

}

WeatherTodayData::WeatherTodayData(QString curLocation, QTime curTime, Temperature curTemperature,
                 QString description, Temperature feelingTemperature,
                 QString humidity, QString preassure, Temperature temperatureAt3,
                 Temperature temperatureAt9, Temperature temperatureAt15, Temperature temperatureAt21)
{
    this->curLocation = curLocation;
    this->curTime = curTime;
    this->curTemperature = curTemperature;
    this->description = description;
    this->feelingTemperature = feelingTemperature;
    this->humidity = humidity;
    this->preassure = preassure;
    this->temperatureAt3 = temperatureAt3;
    this->temperatureAt9 = temperatureAt9;
    this->temperatureAt15 = temperatureAt15;
    this->temperatureAt21 = temperatureAt21;
}
