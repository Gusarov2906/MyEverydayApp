#ifndef WEATHERTODAYWIDGET_H
#define WEATHERTODAYWIDGET_H

#include <QObject>
#include <QWidget>
#include "AbstractWidget.h"

QT_BEGIN_NAMESPACE
namespace Ui { class WeatherTodayWidget; }
QT_END_NAMESPACE

class WeatherTodayWidget: public AbstractWidget
{
    //Q_OBJECT
public:
    WeatherTodayWidget();
    ~WeatherTodayWidget();
    void init() override;
    void deinit() override;
    QWidget* getWidget() override;
    void test();
private:
    QWidget* widget;
    Ui::WeatherTodayWidget *ui;
};

#endif // WEATHERTODAYWIDGET_H
