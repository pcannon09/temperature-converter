# Temperature converter
Get temperature of celsius, fahrenheit, kelvin, rankine, delise and reaumur

Do command 'make' to compile it

The syntax is very readable, here are all the possible combinations:

```cpp
#include <iostream> // IO
#include "path/to/dir/tempConverter.hpp" // Temperature converter lib

std::cout<<"Celsius to...\n";

std::cout<<"Fahrenheit (14ºC): "<<tempConverter::celsiusToFahrenheit(14)<<"\n";
std::cout<<"Delisle (20ºC): "<<tempConverter::celsiusToDelisle(20)<<"\n";
std::cout<<"Kelvin (8ºC): "<<tempConverter::celsiusToKelvin(8)<<"\n";
std::cout<<"Rankine (18ºC): "<<tempConverter::celsiusToRankine(16)<<"\n";
std::cout<<"Réaumur (45ºC): "<<tempConverter::celsiusToReaumur(45)<<"\n";

std::cout<<"\nFahrenheit to..."<<"\n";

std::cout<<"Celsius (14ºC): "<<tempConverter::fahrenheitToCelsius(14)<<"\n";
std::cout<<"Delisle (20ºC): "<<tempConverter::fahrenheitToDelisle(20)<<"\n";
std::cout<<"Kelvin (8ºC): "<<tempConverter::fahrenheitToKelvin(8)<<"\n";
std::cout<<"Rankine (18ºC): "<<tempConverter::fahrenheitToRankine(16)<<"\n";
std::cout<<"Réaumur (45ºC): "<<tempConverter::fahrenheitToReaumur(45)<<"\n";

std::cout<<"\n Rankine to..."<<"\n";

std::cout<<"Fahrenheit (14ºC): "<<tempConverter::rankineToFahrenheit(14)<<"\n";
std::cout<<"Celsius (14ºC): "<<tempConverter::rankineToCelsius(14)<<"\n";
std::cout<<"Delisle (20ºC): "<<tempConverter::rankineToDelisle(20)<<"\n";
std::cout<<"Kelvin (8ºC): "<<tempConverter::rankineToKelvin(8)<<"\n";
std::cout<<"Réaumur (45ºC): "<<tempConverter::rankineToReaumur(45)<<"\n";

std::cout<<"\n Reaumur to..."<<"\n";

std::cout<<"Fahrenheit (14ºC): "<<tempConverter::reaumurToFahrenheit(14)<<"\n";
std::cout<<"Celsius (14ºC): "<<tempConverter::reaumurToCelsius(14)<<"\n";
std::cout<<"Delisle (20ºC): "<<tempConverter::reaumurToDelisle(20)<<"\n";
std::cout<<"Kelvin (8ºC): "<<tempConverter::reaumurToKelvin(8)<<"\n";

std::cout<<"\n Delisle to..."<<"\n";

std::cout<<"Fahrenheit (14ºC): "<<tempConverter::delisleToFahrenheit(14)<<"\n";
std::cout<<"Celsius (14ºC): "<<tempConverter::delisleToCelsius(14)<<"\n";
std::cout<<"Kelvin (8ºC): "<<tempConverter::delisleToKelvin(8)<<"\n";
std::cout<<"Réaumur (45ºC): "<<tempConverter::delisleToReaumur(45)<<"\n";
```

Basicly you can do:

```cpp
tempConverter::somethingToSomething(temperature);
```
