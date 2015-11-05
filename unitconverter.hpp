//
//  unitconverter.hpp
//  Exercise02
//
//  Created by Tao on 20.11.14.
//  Copyright (c) 2014 Tao. All rights reserved.
//

#ifndef __Exercise02__converter__
#define __Exercise02__converter__

#include <stdio.h>
#include <iostream>
#include <string>



class UnitConverter
{
public:
    UnitConverter();
    virtual double convert(double inValue) = 0;
    virtual std::string toString() const = 0;
    virtual void print() const = 0;
};



#endif /* defined(__Exercise02__unitconverter__) */
