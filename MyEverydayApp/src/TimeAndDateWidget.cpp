#include "TimeAndDateWidget.h"
#include "ui_TimeAndDateWidget.h"

TimeAndDateWidget::TimeAndDateWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TimeAndDateWidget)
{
    ui->setupUi(this);
}

TimeAndDateWidget::~TimeAndDateWidget()
{
    delete ui;
}
