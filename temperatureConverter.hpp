//
//  temperatureConverter.h
//  Test
//
//  Created by Tao on 06.11.14.
//  Copyright (c) 2014 Tao. All rights reserved.
//

#ifndef __Test__temperatureConverter__
#define __Test__temperatureConverter__


#include <string>
#include <iostream>
#include "unitconverter.hpp"

class TemperatureConverter : public UnitConverter
{
public:
    TemperatureConverter();
    virtual double convert(double inVal) = 0;
    virtual std::string toString() const = 0;
    virtual void print() const = 0;
   
};







#endif /* defined(__Test__temperatureConverter__) */
