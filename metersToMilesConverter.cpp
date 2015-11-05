//
//  metersToMilesConverter.cpp
//  Test
//
//  Created by Tao on 06.11.14.
//  Copyright (c) 2014 Tao. All rights reserved.
//

#include "metersToMilesConverter.hpp"
#include <string>

metersToMilesConverter::metersToMilesConverter()
{
}

/*In: double value of meters
 *Out: miles value
 */
double metersToMilesConverter::convert(double inputMeters){
    return inputMeters*0.00062137119;
}

std::string metersToMilesConverter::toString() const{
    return "Meter to Miles Converter";
}

void metersToMilesConverter::print() const{
    std::cout<<this->toString();
}

std::shared_ptr<UnitConverter> metersToMilesConverter::create()
{
    return std::make_shared<metersToMilesConverter>();
}