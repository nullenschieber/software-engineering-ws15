//
//  ConverterDecotater.h
//  Exercise02
//
//  Created by Tao on 14.12.14.
//  Copyright (c) 2014 Tao. All rights reserved.
//

#ifndef __Exercise02__ConverterDecotater__
#define __Exercise02__ConverterDecotater__

#include <stdio.h>
#include "unitconverter.hpp"

class ConverterDecorator : public UnitConverter
{
    
public:
    ConverterDecorator() : m_to_decorate{nullptr} {};
    ConverterDecorator( UnitConverter* inner ) : m_to_decorate{inner} {};
    double convert(double inValue) 
    {
        return this->convert(m_to_decorate->convert(inValue));
    }
    
protected:
    UnitConverter* m_to_decorate;
};

#endif /* defined(__Exercise02__ConverterDecotater__) */
