#include "companyshareswidget.h"
#include "ui_CompanySharesWidget.h"

CompanySharesWidget::CompanySharesWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CompanySharesWidget)
{
    ui->setupUi(this);
}

CompanySharesWidget::~CompanySharesWidget()
{
    delete ui;
}
