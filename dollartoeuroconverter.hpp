#ifndef DOLLARTOEUROCONVERTER_H
#define DOLLARTOEUROCONVERTER_H

#include "currencyConverter.hpp"

class dollarToEuroConverter : public currencyConverter
{
  public:
    dollarToEuroConverter();
    double convert(double inDollars);
    std::string toString() const;
    void print() const;
     static std::shared_ptr<UnitConverter> create();
};

#endif // DOLLARTOEUROCONVERTER_H
