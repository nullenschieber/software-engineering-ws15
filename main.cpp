#include "dollartoeuroconverter.hpp"
#include "metersToMilesConverter.hpp"
#include "milesToMeters.hpp"
#include "fahrenheitToCelsius.hpp"
#include "celsiusToFahrenheit.hpp"
#include "ConverterFactory.hpp"

unsigned short c = 0;
double value = 0.0;

void menu()
{
    std::cout << "Converter for multiple measures \n\n";
    std::cout << "Chose converter:\n\n";
    std::cout << "(1) MetersToMiles (2) MilesToMeters (3) FahrenheitToCelsius (4) CelsiusToFahrenheit (5) DollarsToEuro\n\n";
    std::cout << "(0) Quit\n\n";
    
    std::cin >> c;
    std::cout << "Enter value:\n\n";
    std::cin >> value;
}


int main(int argc, char* argv[])
{
  
    std::string method = "";
    
    if (argc > 2) {
        method = argv[1];
        value = atof(argv[2]);
    }
    else
        menu();
    
    
    
//    
//    std::string input = argv[1];
//    double value = std::stod(argv[2]);
    
    c = ( method.compare("metersToMiles") == 0 )        ? 1 : c;
    c = ( method.compare("milesToMeters") == 0 )        ? 2 : c;
    c = ( method.compare("fahrenheitToCelsius") == 0 )  ? 3 : c;
    c = ( method.compare("celsiusToFahrenheit") == 0 )  ? 4 : c;
    c = ( method.compare("dollarsToEuro") == 0 )        ? 5 : c;

    ConverterFactory* converterFactory;
    converterFactory = converterFactory->instance();
    
    switch (c)
    {
            case 0:
            std::cout << "\nNothing to do.\n";
            return 0;
            break; 
            
            case 1:
        {
            double output = converterFactory->create("metersToMilesConverter")->convert(value);
            std::cout << "converted "<< value << " meters to " << output <<" miles!"<<std::endl;
            break;
        }
            
            case 2:
        {
            double output = converterFactory->create("milesToMeters")->convert(value);
            std::cout << "converted "<< value << " miles to " << output <<" meters!"<<std::endl;
            break;
        }
            
            case 3:
        {
            double output = converterFactory->create("fahrenheitToCelsius")->convert(value);
            
            std::cout << "Converted "<< value << " Fahrenheit to " << output <<" Celsius!"<<std::endl;
            break;
        }
            case 4:
        {
            std::cout << "Converted ";
            double output = converterFactory->create("celsiusToFahrenheit")->convert(value);
                       
            std::cout << "Converted "<< value << " Celsius to " << output <<" Fahrenheit!"<<std::endl;
            break;
        }

            
            case 5:
        {
             double output = converterFactory->create("dollarToEuroConverter")->convert(value);
            std::cout << "converted "<< value << " Dollar to " << output <<" Euros!"<<std::endl;
            
            break;
        }
            
            default:
        {
            
            std::cout << "That is not an option!" << std::endl;
            std::cout << "Please close the program and try again." << std::endl;
            break;
        }
    }

  return 0;
}

