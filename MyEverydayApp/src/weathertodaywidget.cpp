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
    update();
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
    this->weatherTodayData = parser.getWeatherTodayData();
    ui->locationLabel->setText(this->weatherTodayData.curLocation);
    ui->nowTempLabel->setText(this->weatherTodayData.curTemperature.getString());
    ui->timeLabel->setText("На момент обновления: " + this->weatherTodayData.curTime.toString());
    ui->descriptionLabel->setText(this->weatherTodayData.description);
    ui->feelsLikeLabel->setText(this->weatherTodayData.feelingTemperature.getString());
    ui->humidityValueLabel->setText(this->weatherTodayData.humidity);
    ui->preasureValueLabel->setText(this->weatherTodayData.preassure);
    ui->tempLabel1->setText(this->weatherTodayData.temperatureAt3.getString());
    ui->tempLabel2->setText(this->weatherTodayData.temperatureAt9.getString());
    ui->tempLabel3->setText(this->weatherTodayData.temperatureAt15.getString());
    ui->tempLabel4->setText(this->weatherTodayData.temperatureAt21.getString());
}

WeatherTodayWidget::~WeatherTodayWidget()
{
    delete ui;
}

