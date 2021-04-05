#ifndef WIDGET_H
#define WIDGET_H

#include <memory>
#include <QObject>
#include <QSize>

class AbstractWidget: public QObject
{
    Q_OBJECT
public:
    virtual void init() = 0;
    virtual void deinit() = 0;
    virtual QWidget* getWidget() = 0;
protected:
    QString name;
    int id;
    QSize minSize;
    QSize maxSize;
};

#endif // WIDGET_H
