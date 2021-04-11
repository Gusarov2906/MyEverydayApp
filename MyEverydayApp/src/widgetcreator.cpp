#include "widgetcreator.h"


WidgetCreator::WidgetCreator()
{
    this->id = 0;
}

WeatherTodayWidget* WidgetCreator::createWeatherTodayWidget(QString name)
{
    return new WeatherTodayWidget(name,this->id);
}
