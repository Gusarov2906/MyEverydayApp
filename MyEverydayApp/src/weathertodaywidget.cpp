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
    this->updateTime = QTime(0,5);
}

WeatherTodayWidget::WeatherTodayWidget(QString name, int id, QSize minSize, QSize maxSize, QSize curSize,
                                       QPoint position, QTime updateTime): ui(new Ui::WeatherTodayWidget)
{
    this->name = name;
    this->id = id;
    this->minSize = minSize;
    this->maxSize = maxSize;
    this->curSize = curSize;
    this->position = position;
    this->updateTime = updateTime;
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

WeatherTodayWidget::~WeatherTodayWidget()
{
    delete ui;
}

void WeatherTodayWidget::update(WeatherTodayData weatherTodayData)
{
    ui->locationLabel->setText(weatherTodayData.curLocation);
    ui->nowTempLabel->setText(weatherTodayData.curTemperature.getString());
    ui->timeLabel->setText("На момент обновления: " + weatherTodayData.curTime.toString());
    ui->descriptionLabel->setText(weatherTodayData.description);
    ui->feelsLikeLabel->setText(weatherTodayData.feelingTemperature.getString());
    ui->humidityValueLabel->setText(weatherTodayData.humidity);
    ui->preasureValueLabel->setText(weatherTodayData.preassure);
    ui->tempLabel1->setText(weatherTodayData.temperatureAt3.getString());
    ui->tempLabel2->setText(weatherTodayData.temperatureAt9.getString());
    ui->tempLabel3->setText(weatherTodayData.temperatureAt15.getString());
    ui->tempLabel4->setText(weatherTodayData.temperatureAt21.getString());
}

