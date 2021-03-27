#include "WeatherTodayWidget.h"
#include "ui_WeatherTodayWidget.h"

WeatherTodayWidget::WeatherTodayWidget(QWidget *parent):
    QWidget(parent), ui(new Ui::WeatherTodayWidget)
{
    ui->setupUi(this);
}
