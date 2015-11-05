//
//  ConverterFactory.cpp
//  Exercise02
//
//  Created by Tao on 30.11.14.
//  Copyright (c) 2014 Tao. All rights reserved.
//

#include "ConverterFactory.hpp"
#include "dollartoeuroconverter.hpp"
#include "metersToMilesConverter.hpp"
#include "milesToMeters.hpp"
#include "fahrenheitToCelsius.hpp"
#include "celsiusToFahrenheit.hpp"
#include <iostream>





ConverterFactory* ConverterFactory::cfInstance = NULL;

ConverterFactory::ConverterFactory() : converterMap{}
{
    converterMap.insert(std::make_pair("metersToMilesConverter", MetersToMilesConverter::create));
    converterMap.insert(std::make_pair("milesToMeters", MilesToMeters::create));
    converterMap.insert(std::make_pair("fahrenheitToCelsius", FahrenheitToCelsius::create));
    converterMap.insert(std::make_pair("celsiusToFahrenheit", CelsiusToFahrenheit::create));
    converterMap.insert(std::make_pair("dollarToEuroConverter", DollarToEuroConverter::create));
}
std::shared_ptr<UnitConverter> ConverterFactory::create(std::string const& method)
{
    return converterMap[method]();
}
ConverterFactory* ConverterFactory::instance()
{
    if(cfInstance == NULL)
    {
        cfInstance = new ConverterFactory;
    }
    return cfInstance;
}