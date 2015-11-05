//
//  celsiusToFahrenheit.cpp
//  Exercise02
//
//  Created by Tao on 06.11.14.
//  Copyright (c) 2014 Tao. All rights reserved.
//

#include "celsiusToFahrenheit.hpp"
#include <string>

celsiusToFahrenheit::celsiusToFahrenheit()
{
}
celsiusToFahrenheit::~celsiusToFahrenheit()
{
}

/*In: double value of Celsius
 *Out: Fahrenheit value
 */
double celsiusToFahrenheit::convert(double inputCelsius){
    return (inputCelsius*1.8)+32;
}

std::string celsiusToFahrenheit::toString() const{
    return "Celsius to Fahrenheit Converter";
}

void celsiusToFahrenheit::print() const{
    std::cout<<this->toString();
}

std::shared_ptr<UnitConverter> celsiusToFahrenheit::create()
{
    return std::make_shared<celsiusToFahrenheit>();
}