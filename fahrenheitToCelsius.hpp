//
//  fahrenheitToCelsius.h
//  Exercise02
//
//  Created by Tao on 08.11.14.
//  Copyright (c) 2014 Tao. All rights reserved.
//

#ifndef __Exercise02__fahrenheitToCelsius__
#define __Exercise02__fahrenheitToCelsius__

#include <stdio.h>
#include <string>
#include "temperatureConverter.hpp"

class fahrenheitToCelsius : public temperatureConverter
{
public:
    fahrenheitToCelsius();
    double convert(double inVal);
    std::string toString() const;
    void print() const;
    static std::shared_ptr<UnitConverter> create();
};



#endif /* defined(__Exercise02__fahrenheitToCelsius__) */
