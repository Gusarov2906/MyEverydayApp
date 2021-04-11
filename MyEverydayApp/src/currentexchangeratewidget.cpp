#include "currentexchangeratewidget.h"
#include "ui_CurrentExchangeRateWidgetui.h"

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
