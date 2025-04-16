//
// Created by srugi on 4/16/2025.
//

#include <iostream>
#include "conversion.h"
using namespace std;


float celsiusToFahrenheit(float temp) {
    float fahrenheit = (temp * 9 / 5) + 32;
    return fahrenheit;
}


float centimetersToInches(float num) {
    float inches = num/2.54;
    return inches;
}
