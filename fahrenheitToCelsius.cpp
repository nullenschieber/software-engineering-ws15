//
//  fahrenheitToCelsius.cpp
//  Exercise02
//
//  Created by Tao on 08.11.14.
//  Copyright (c) 2014 Tao. All rights reserved.
//

#include "fahrenheitToCelsius.hpp"
#include <string>

FahrenheitToCelsius::FahrenheitToCelsius()
{
}


/*In: double value of meters
 *Out: miles value
 */
double FahrenheitToCelsius::convert(double inputFahrenheit){
    return (inputFahrenheit - 32) * 0.5555555555555556;
}

std::string FahrenheitToCelsius::toString() const{
    return "Fahrenheit to Celsius Converter";
}

void FahrenheitToCelsius::print() const{
    std::cout<<this->toString();
}


std::shared_ptr<UnitConverter> FahrenheitToCelsius::create()
{
    return std::make_shared<FahrenheitToCelsius>();
}