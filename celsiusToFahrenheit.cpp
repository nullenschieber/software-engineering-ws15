//
//  celsiusToFahrenheit.cpp
//  Exercise02
//
//  Created by Tao on 06.11.14.
//  Copyright (c) 2014 Tao. All rights reserved.
//

#include "celsiusToFahrenheit.hpp"
#include <string>

CelsiusToFahrenheit::CelsiusToFahrenheit()
{
}
CelsiusToFahrenheit::~CelsiusToFahrenheit()
{
}

/*In: double value of Celsius
 *Out: Fahrenheit value
 */
double CelsiusToFahrenheit::convert(double inputCelsius){
    return (inputCelsius*1.8)+32;
}

std::string CelsiusToFahrenheit::toString() const{
    return "Celsius to Fahrenheit Converter";
}

void CelsiusToFahrenheit::print() const{
    std::cout<<this->toString();
}

std::shared_ptr<UnitConverter> CelsiusToFahrenheit::create()
{
    return std::make_shared<CelsiusToFahrenheit>();
}