#include "weatherweeklywidget.h"
#include "ui_WeatherWeeklyWidget.h"

WeakherWeeklyWidget::WeakherWeeklyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WeakherWeeklyWidget)
{
    ui->setupUi(this);
}

WeakherWeeklyWidget::~WeakherWeeklyWidget()
{
    delete ui;
}
