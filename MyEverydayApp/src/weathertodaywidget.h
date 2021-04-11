#ifndef WEATHERTODAYWIDGET_H
#define WEATHERTODAYWIDGET_H

#include <QObject>
#include <QWidget>
#include "abstractwidget.h"
#include "weathertodaydata.h"
#include "parser.h"

QT_BEGIN_NAMESPACE
namespace Ui { class WeatherTodayWidget; }
QT_END_NAMESPACE

class WeatherTodayWidget: public AbstractWidget
{
    //Q_OBJECT
public:
    WeatherTodayWidget(QString name,int id);
    WeatherTodayWidget(QString name,int id, QSize minSize, QSize maxSize, QSize curSize, QPoint position, QTime updateTime);
    ~WeatherTodayWidget();

    void init(QWidget* parent) override;
    void deinit() override;
    QWidget* getWidget() override;
protected:
    void update() override;

    WeatherTodayData weatherTodayData;
    QWidget* widget;
    Ui::WeatherTodayWidget *ui;
    Parser parser;
};

#endif // WEATHERTODAYWIDGET_H
