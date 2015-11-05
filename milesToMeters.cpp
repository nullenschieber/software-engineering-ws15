//
//  milesToMeters.cpp
//  Test
//
//  Created by Tao on 06.11.14.
//  Copyright (c) 2014 Tao. All rights reserved.
//

#include "milesToMeters.hpp"
#include <string>

milesToMeters::milesToMeters()
{
}

/*In: double value of miles
 *Out: meter value
 */
double milesToMeters::convert(double inputMiles){
    return inputMiles*1609.344;
}

std::string milesToMeters::toString() const{
    return "Miles to Meter Converter";
}

void milesToMeters::print() const{
    std::cout<<this->toString();
}

std::shared_ptr<UnitConverter> milesToMeters::create()
{
    return std::make_shared<milesToMeters>();
}