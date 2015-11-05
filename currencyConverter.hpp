//  Created by Tao on 06.11.14.
//  Copyright (c) 2014 Tao. All rights reserved.
//


#ifndef CURRENCYCONVERTER_H
#define CURRENCYCONVERTER_H

#include <iostream>
#include <string>
#include "unitconverter.hpp"

class  currencyConverter : public UnitConverter

{
  public:
	  

	 currencyConverter();
	virtual double convert(double inValue) = 0;
    virtual std::string toString() const = 0;
    virtual void print() const = 0;

};

#endif // CURRENCYCONVERTER_H
