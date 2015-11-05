//
//  milesToMeters.h
//  Test
//
//  Created by Tao on 06.11.14.
//  Copyright (c) 2014 Tao. All rights reserved.
//

#ifndef __Test__milesToMeters__
#define __Test__milesToMeters__

#include "lengthConverter.hpp"

class milesToMeters : public lengthConverter
{
public:
    milesToMeters();
    double convert(double inVal);
    std::string toString() const;
    void print() const;
    static std::shared_ptr<UnitConverter> create();
};

#endif /* defined(__Test__milesToMeters__) */
