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
    WidgetCreator widgetCreator;
    WeatherTodayWidget* tmp = widgetCreator.createWeatherTodayWidget("Wid1");
    wd.widgets.append((tmp));
    wd.widgets.back()->init(ui->widget00);
}

MainWindow::~MainWindow()
{
    delete ui;
}

