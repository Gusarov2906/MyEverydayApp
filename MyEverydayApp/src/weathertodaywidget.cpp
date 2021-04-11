#include "weathertodaywidget.h"
#include "ui_WeatherTodayWidget.h"	
#include <unistd.h>

WeatherTodayWidget::WeatherTodayWidget(QString name, int id): ui(new Ui::WeatherTodayWidget)
{
    this->name = name;
    this->id = id;
    this->minSize = QSize(400,400);
    this->maxSize = QSize(600,600);
    this->curSize = minSize;
    this->position = QPoint();
}

WeatherTodayWidget::WeatherTodayWidget(QString name, int id, QSize minSize, QSize maxSize, QSize curSize,
                                       QPoint position): ui(new Ui::WeatherTodayWidget)
{
    this->name = name;
    this->id = id;
    this->minSize = minSize;
    this->maxSize = maxSize;
    this->curSize = curSize;
    this->position = position;
}

void WeatherTodayWidget::init(QWidget* parent)
{
    widget = new QWidget(parent);
    widget->setMaximumSize(this->maxSize);
    widget->setMinimumSize(this->minSize);
    widget->setBaseSize(this->curSize);
    ui->setupUi(widget);
}

void WeatherTodayWidget::deinit()
{
    widget->deleteLater();
}

QWidget* WeatherTodayWidget::getWidget()
{
    return widget;
}

void WeatherTodayWidget::update()
{

}

WeatherTodayWidget::~WeatherTodayWidget()
{
    delete ui;
}

