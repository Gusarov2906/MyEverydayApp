#ifndef TIMEANDDATEWIDGET_H
#define TIMEANDDATEWIDGET_H

#include <QWidget>

namespace Ui {
class TimeAndDateWidget;
}

class TimeAndDateWidget : public QWidget
{
    Q_OBJECT

public:
    explicit TimeAndDateWidget(QWidget *parent = nullptr);
    ~TimeAndDateWidget();

private:
    Ui::TimeAndDateWidget *ui;
};

#endif // TIMEANDDATEWIDGET_H
