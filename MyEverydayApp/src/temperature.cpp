#include "temperature.h"

Temperature::Temperature()
{
    this->degrees = -1000;
}

Temperature::Temperature(int degrees)
{
    this->degrees = degrees;
}


QString Temperature::getString()
{
    if(this->degrees >= 0)
        return QString('+'+ QString::number(degrees) +"°C");
    else
        return QString(QString::number(degrees) +"°C");
}
