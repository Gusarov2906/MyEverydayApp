#include "NewsWidget.h"
#include "ui_NewsWidget.h"

NewsWidget::NewsWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NewsWidget)
{
    ui->setupUi(this);
}

NewsWidget::~NewsWidget()
{
    delete ui;
}
