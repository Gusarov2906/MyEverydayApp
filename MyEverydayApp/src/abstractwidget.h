#ifndef WIDGET_H
#define WIDGET_H

#include <memory>
#include <QObject>
#include <QSize>
#include <QPoint>

class AbstractWidget: public QObject
{
    Q_OBJECT
public:
    virtual void init(QWidget* parents) = 0;
    virtual void deinit() = 0;
    virtual QWidget* getWidget() = 0;

protected:
    virtual void update(){};
    QString name;
    int id;
    QSize minSize;
    QSize maxSize;
    QSize curSize;
    QPoint position;
};

#endif // WIDGET_H
