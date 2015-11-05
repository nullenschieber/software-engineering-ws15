//
//  ConverterFactory.h
//  Exercise03
//
//  Created by Tao on 30.11.14.
//  Copyright (c) 2014 Tao. All rights reserved.
//

#ifndef __Exercise03__ConverterFactory__
#define __Exercise03__ConverterFactory__


#include "unitconverter.hpp"
#include <map>
#include <functional>

class ConverterFactory {
public:
    std::shared_ptr<UnitConverter> create(std::string const&);
    static ConverterFactory* instance();

private:
    ConverterFactory();
    static ConverterFactory * cfInstance;
    std::map<std::string, std::function<std::shared_ptr<UnitConverter>()>> converterMap;
};





#endif /* defined(__Exercise03__ConverterFactory__) */
