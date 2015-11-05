//
//  testsuite.cpp
//  Exercise02
//
//  Created by Tao on 07.11.14.
//  Copyright (c) 2014 Tao. All rights reserved.
//

#include "dollartoeuroconverter.hpp"
#include "metersToMilesConverter.h"
#include "milesToMeters.h"
#include "fahrenheitToCelsius.h"
#include "celsiusToFahrenheit.h"

#include "tinytest.h"


int metersToMilesTest()
{
    metersToMilesConverter* meterConverter = new metersToMilesConverter();
    double val = meterConverter->convert(111);
    TINYTEST_EQUAL_EPSILON(0.068972202, val);
	
	return 1;
}

int milesToMetersTest()
{
    milesToMeters* milesConverter = new milesToMeters();
    double val = milesConverter->convert(111);
	TINYTEST_EQUAL_EPSILON_MSG(178637.184000, val, "milesToMeters");
	
	return 1;
}

int fahrenheitToCelsiusTest()
{
    fahrenheitToCelsius* fahrenheitConverter = new fahrenheitToCelsius();
    double val = fahrenheitConverter->convert(111);
    TINYTEST_EQUAL_EPSILON_MSG(43.888889, val, "fahrenheitToCelsius");
    
    return 1;
}

int celsiusToFahrenheitTest()
{
    celsiusToFahrenheit* myConverter = new celsiusToFahrenheit();
    double val = myConverter->convert(15);
    TINYTEST_EQUAL_EPSILON_MSG(59.0, val, "celsiusToFahrenheit");
    
    return 1;
}



int dollarToEuroConverterTest()
{
    dollarToEuroConverter* myConverter = new dollarToEuroConverter();
    double val = myConverter->convert(111);
    TINYTEST_EQUAL_EPSILON_MSG(86.828640, val, "dollarToEuroConverter");
    
    return 1;
}






TINYTEST_START_SUITE(MainTest);

TINYTEST_ADD_TEST(metersToMilesTest);
TINYTEST_ADD_TEST(milesToMetersTest);
TINYTEST_ADD_TEST(fahrenheitToCelsiusTest);
TINYTEST_ADD_TEST(celsiusToFahrenheitTest);
TINYTEST_ADD_TEST(dollarToEuroConverterTest);
TINYTEST_END_SUITE();

TINYTEST_MAIN_SINGLE_SUITE(MainTest);
