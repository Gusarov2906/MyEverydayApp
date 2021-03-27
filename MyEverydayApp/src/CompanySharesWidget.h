#ifndef COMPANYSHARESWIDGET_H
#define COMPANYSHARESWIDGET_H

#include <QWidget>

namespace Ui {
class CompanySharesWidget;
}

class CompanySharesWidget : public QWidget
{
    Q_OBJECT

public:
    explicit CompanySharesWidget(QWidget *parent = nullptr);
    ~CompanySharesWidget();

private:
    Ui::CompanySharesWidget *ui;
};

#endif // COMPANYSHARESWIDGET_H
