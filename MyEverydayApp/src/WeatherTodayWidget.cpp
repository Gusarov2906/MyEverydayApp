#include "WeatherTodayWidget.h"
#include "ui_WeatherTodayWidget.h"	
#include <unistd.h>

WeatherTodayWidget::WeatherTodayWidget(): ui(new Ui::WeatherTodayWidget)
{

}

void WeatherTodayWidget::init()
{
    widget = new QWidget();
    ui->setupUi(widget);
}

void WeatherTodayWidget::deinit()
{
    //widget->deleteLater();
}

QWidget* WeatherTodayWidget::getWidget()
{
    return widget;
}

WeatherTodayWidget::~WeatherTodayWidget()
{
    delete ui;
    delete widget;
}

