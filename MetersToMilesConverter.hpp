//
//  MetersToMilesConverter.h
//  Test
//
//  Created by Tao on 06.11.14.
//  Copyright (c) 2014 Tao. All rights reserved.
//

#ifndef __Test__metersToMilesConverter__
#define __Test__metersToMilesConverter__

#include <stdio.h>
#include "lengthConverter.hpp"
#include <string>

class MetersToMilesConverter : public LengthConverter
{
    public:
    MetersToMilesConverter();
    double convert(double inVal);
    std::string toString() const;
    void print() const;
    static std::shared_ptr<UnitConverter> create();
};


#endif /* defined(__Test__metersToMilesConverter__) */
