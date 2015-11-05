//
//  lengthConverter.h
//  Test
//
//  Created by Tao on 06.11.14.
//  Copyright (c) 2014 Tao. All rights reserved.
//

#ifndef __Test__lengthConverter__
#define __Test__lengthConverter__

#include <stdio.h>
#include <string>
#include <iostream>
#include "unitconverter.hpp"

class LengthConverter  :  public UnitConverter
{
public:
    LengthConverter();
    virtual double convert(double inValue) = 0;
    virtual std::string toString() const = 0;
    virtual void print() const = 0;
};



#endif /* defined(__Test__lengthConverter__) */
