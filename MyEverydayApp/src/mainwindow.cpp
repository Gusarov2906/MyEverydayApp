#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "weatherwidget.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);    
    QVBoxLayout* lay = new QVBoxLayout(ui->widget01);
    lay->addWidget(new WeatherWidget(ui->widget01));
}

MainWindow::~MainWindow()
{
    delete ui;
}

