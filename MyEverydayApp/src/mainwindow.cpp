#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "WeatherTodayWidget.h"
#include "WelcomeWidget.h"
#include "NotesWidget.h"
#include "TimeAndDateWidget.h"
#include "CompanySharesWidget.h"
#include "WeatherWeeklyWidget.h"
#include "WidgetCreator.h"
#include "WidgetSpace.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    WidgetSpace wd;
    //WidgetCreator widgetCreator;
    //WeatherTodayWidget* tmp = widgetCreator.createWeatherTodayWidget("Wid1");
    //wd.widgets.append((*tmp));
    //delete tmp;


//    QVBoxLayout* lay01 = new QVBoxLayout();

//    WeatherTodayWidget* wtw = new WeatherTodayWidget();
//    wtw->init();
//    lay01->addWidget(wtw->getWidget());
//    //wtw->deinit();
//    QVBoxLayout* lay02 = new QVBoxLayout(ui->widget02);
//    lay02->addWidget(new NotesWidget(ui->widget02));
//    QVBoxLayout* lay10 = new QVBoxLayout(ui->widget10);
//    lay10->addWidget(new TimeAndDateWidget(ui->widget10));
//    QVBoxLayout* lay11 = new QVBoxLayout(ui->widget11);
//    lay11->addWidget(new CompanySharesWidget(ui->widget11));
//    QVBoxLayout* lay12 = new QVBoxLayout(ui->widget12);
//    lay12->addWidget(new WeakherWeeklyWidget(ui->widget12));
}

MainWindow::~MainWindow()
{
    delete ui;
}

