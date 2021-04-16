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
    ui->locationLabel->setText(weatherTodayData.getCurLocation());
    ui->nowTempLabel->setText(weatherTodayData.getCurTemperature().getString());
    ui->timeLabel->setText("На момент обновления: " + weatherTodayData.getCurTime().toString());
    ui->descriptionLabel->setText(weatherTodayData.getDescription());
    ui->feelsLikeLabel->setText(weatherTodayData.getFeelingTemperature().getString());
    ui->humidityValueLabel->setText(weatherTodayData.getHumidity());
    ui->preasureValueLabel->setText(weatherTodayData.getPreassure());
    ui->tempLabel1->setText(weatherTodayData.getTemperatureAt3().getString());
    ui->tempLabel2->setText(weatherTodayData.getTemperatureAt9().getString());
    ui->tempLabel3->setText(weatherTodayData.getTemperatureAt15().getString());
    ui->tempLabel4->setText(weatherTodayData.getTemperatureAt21().getString());
}

