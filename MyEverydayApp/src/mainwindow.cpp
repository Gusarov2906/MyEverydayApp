#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "weathertodaywidget.h"
#include "welcomewidget.h"
#include "noteswidget.h"
#include "timeanddatewidget.h"
#include "companyshareswidget.h"
#include "weatherweeklywidget.h"
#include "widgetcreator.h"
#include "widgetspace.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    WidgetSpace wd;
    WidgetCreator widgetCreator;
    WeatherTodayWidget* tmp = widgetCreator.createWeatherTodayWidget("Wid1");
    wd.widgets.append((tmp));
    wd.widgets.back()->init(ui->widget00);
}

MainWindow::~MainWindow()
{
    delete ui;
}

