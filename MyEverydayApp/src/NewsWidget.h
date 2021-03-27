#ifndef NEWSWIDGET_H
#define NEWSWIDGET_H

#include <QWidget>

namespace Ui {
class NewsWidget;
}

class NewsWidget : public QWidget
{
    Q_OBJECT

public:
    explicit NewsWidget(QWidget *parent = nullptr);
    ~NewsWidget();

private:
    Ui::NewsWidget *ui;
};

#endif // NEWSWIDGET_H
