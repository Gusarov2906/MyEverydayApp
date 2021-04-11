#include "parser.h"

Parser::Parser()
{

}

WeatherTodayData Parser::getWeatherTodayData()
{
 //TODO: rewrite it later
    return WeatherTodayData("Зеленоград", QTime(21,29),Temperature(7),"Облачно", Temperature(4),"75%","1000hPa",
                            Temperature(5),Temperature(9),Temperature(13),Temperature(6));
}
