#ifndef WEATHERWEEKLYWIDGET_H
#define WEATHERWEEKLYWIDGET_H

#include <QWidget>

namespace Ui {
class WeakherWeeklyWidget;
}

class WeakherWeeklyWidget : public QWidget
{
    Q_OBJECT

public:
    explicit WeakherWeeklyWidget(QWidget *parent = nullptr);
    ~WeakherWeeklyWidget();

private:
    Ui::WeakherWeeklyWidget *ui;
};

#endif // WEATHERWEEKLYWIDGET_H
