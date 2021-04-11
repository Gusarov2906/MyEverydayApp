#ifndef CURRENTEXCHANGERATEWIDGET_H
#define CURRENTEXCHANGERATEWIDGET_H

#include <QWidget>

namespace Ui {
class CurrentExchangeRateWidget;
}

class CurrentExchangeRateWidget : public QWidget
{
    Q_OBJECT

public:
    explicit CurrentExchangeRateWidget(QWidget *parent = nullptr);
    ~CurrentExchangeRateWidget();

private:
    Ui::CurrentExchangeRateWidget *ui;
};

#endif // CURRENTEXCHANGERATEWIDGET_H
