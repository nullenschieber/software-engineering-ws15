//
//  milesToMeters.cpp
//  Test
//
//  Created by Tao on 06.11.14.
//  Copyright (c) 2014 Tao. All rights reserved.
//

#include "milesToMeters.hpp"
#include <string>

MilesToMeters::MilesToMeters()
{
}

/*In: double value of miles
 *Out: meter value
 */
double MilesToMeters::convert(double inputMiles){
    return inputMiles*1609.344;
}

std::string MilesToMeters::toString() const{
    return "Miles to Meter Converter";
}

void MilesToMeters::print() const{
    std::cout<<this->toString();
}

std::shared_ptr<UnitConverter> MilesToMeters::create()
{
    return std::make_shared<MilesToMeters>();
}