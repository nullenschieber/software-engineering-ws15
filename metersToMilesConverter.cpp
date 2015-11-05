//
//  metersToMilesConverter.cpp
//  Test
//
//  Created by Tao on 06.11.14.
//  Copyright (c) 2014 Tao. All rights reserved.
//

#include "metersToMilesConverter.hpp"
#include <string>

MetersToMilesConverter::MetersToMilesConverter()
{
}

/*In: double value of meters
 *Out: miles value
 */
double MetersToMilesConverter::convert(double inputMeters){
    return inputMeters*0.00062137119;
}

std::string MetersToMilesConverter::toString() const{
    return "Meter to Miles Converter";
}

void MetersToMilesConverter::print() const{
    std::cout<<this->toString();
}

std::shared_ptr<UnitConverter> MetersToMilesConverter::create()
{
    return std::make_shared<MetersToMilesConverter>();
}