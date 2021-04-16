#include "currentexchangeratewidget.h"
#include "ui_currentechangeratewidgetui.h"

CurrentExchangeRateWidget::CurrentExchangeRateWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CurrentExchangeRateWidget)
{
    ui->setupUi(this);
}

CurrentExchangeRateWidget::~CurrentExchangeRateWidget()
{
    delete ui;
}
