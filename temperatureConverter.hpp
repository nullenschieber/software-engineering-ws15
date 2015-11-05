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

class temperatureConverter : public UnitConverter
{
public:
    temperatureConverter();
    virtual double convert(double inVal) = 0;
    virtual std::string toString() const = 0;
    virtual void print() const = 0;
   
};







#endif /* defined(__Test__temperatureConverter__) */
