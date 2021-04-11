#ifndef WIDGETSPACE_H
#define WIDGETSPACE_H
#include <QVector>
#include <abstractwidget.h>

class WidgetSpace
{
public:
    WidgetSpace();
    QVector<AbstractWidget*> widgets;
};

#endif // WIDGETSPACE_H
