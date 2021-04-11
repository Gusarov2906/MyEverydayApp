#ifndef WIDGETSPACE_H
#define WIDGETSPACE_H
#include <QVector>
#include <AbstractWidget.h>

class WidgetSpace
{
public:
    WidgetSpace();
    QVector<AbstractWidget*> widgets;
};

#endif // WIDGETSPACE_H
