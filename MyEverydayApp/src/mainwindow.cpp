#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "WeatherTodayWidget.h"
#include "WelcomeWidget.h"
#include "NotesWidget.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QVBoxLayout* lay00 = new QVBoxLayout(ui->widget00);
    lay00->addWidget(new WelcomeWidget(ui->widget00));
    QVBoxLayout* lay01 = new QVBoxLayout(ui->widget01);
    lay01->addWidget(new WeatherTodayWidget(ui->widget01));
    QVBoxLayout* lay02 = new QVBoxLayout(ui->widget02);
    lay02->addWidget(new NotesWidget(ui->widget02));
}

MainWindow::~MainWindow()
{
    delete ui;
}

