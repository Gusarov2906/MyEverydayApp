#ifndef WIDGETCREATOR_H
#define WIDGETCREATOR_H

#include "WeatherTodayWidget.h"
#include <memory>

class WidgetCreator
{
public:
    WidgetCreator();
    WeatherTodayWidget* createWeatherTodayWidget(QString name);
private:
    int id;
};

#endif // WIDGETCREATOR_H
