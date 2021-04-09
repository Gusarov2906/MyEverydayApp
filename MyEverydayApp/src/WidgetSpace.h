#ifndef WIDGETSPACE_H
#define WIDGETSPACE_H
#include <QVector>
#include <AbstractWidget.h>
#include <WeatherTodayWidget.h>

class WidgetSpace
{
public:
    WidgetSpace();
    QVector<WeatherTodayWidget> widgets;
};

#endif // WIDGETSPACE_H
