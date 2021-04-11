#ifndef TEMPERATURE_H
#define TEMPERATURE_H

#include <QString>

class Temperature
{
public:
    Temperature();
    Temperature(int degrees);
    short degrees;
    QString getString();
};

#endif // TEMPERATURE_H
