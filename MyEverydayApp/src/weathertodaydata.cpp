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

QString WeatherTodayData::getCurLocation()
{
    return this->curLocation;
}

QTime WeatherTodayData::getCurTime()
{
    return this->curTime;
}

Temperature WeatherTodayData::getCurTemperature()
{
    return this->curTemperature;
}

QString WeatherTodayData::getDescription()
{
    return this->description;
}

Temperature WeatherTodayData::getFeelingTemperature()
{
    return this->feelingTemperature;
}

QString WeatherTodayData::getHumidity()
{
    return this->humidity;
}
QString WeatherTodayData::getPreassure()
{
    return this->preassure;
}

Temperature WeatherTodayData::getTemperatureAt3()
{
    return this->temperatureAt3;
}

Temperature WeatherTodayData::getTemperatureAt9()
{
    return this->temperatureAt9;
}

Temperature WeatherTodayData::getTemperatureAt15()
{
    return this->temperatureAt15;
}

Temperature WeatherTodayData::getTemperatureAt21()
{
    return this->temperatureAt21;
}
