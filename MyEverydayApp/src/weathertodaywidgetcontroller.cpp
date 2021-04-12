#include "weathertodaywidgetcontroller.h"

WeatherTodayWidgetController::WeatherTodayWidgetController()
{
    this->flagToStop = false;
}

WeatherTodayData WeatherTodayWidgetController::update()
{
    return this->weatherTodayData;
}

void WeatherTodayWidgetController::startUpdateLoop()
{
    //start QThread
}

void WeatherTodayWidgetController::stopUpdateLoop()
{
    //stop QThread
}
