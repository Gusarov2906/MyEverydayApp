#ifndef WEATHERTODAYWIDGET_H
#define WEATHERTODAYWIDGET_H

#include <QObject>
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class WeatherTodayWidget; }
QT_END_NAMESPACE

class WeatherTodayWidget: public QWidget
{
    Q_OBJECT
public:
    WeatherTodayWidget(QWidget *parent = nullptr);
    ~WeatherTodayWidget(){};

private:
    Ui::WeatherTodayWidget *ui;
};

#endif // WEATHERTODAYWIDGET_H
