#include <stdio.h>
#include "temperature.h"  // Don't forget to include this in actual build

float celsius_to_fahrenheit(float celsius) {
    return (9.0 / 5.0) * celsius + 32;
}

float fahrenheit_to_celsius(float fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32);
}

float celsius_to_kelvin(float celsius) {
    return celsius + 273.15;
}

float kelvin_to_celsius(float kelvin) {
    return kelvin - 273.15;
}

void categorize_temperature(float celsius) {
    if (celsius <= 0) {
        printf("Temperature Category: Freezing\n");
        printf("Weather Advisory: Stay Inside\n");
    } 
    else if (celsius > 0 && celsius <= 10) {
        printf("Temperature Category: Cold\n");
        printf("Weather Advisory: Bundle Up\n");
    }
    else if (celsius > 10 && celsius <= 25) {
        printf("Temperature Category: Comfortable\n");
        printf("Weather Advisory: Go Outside\n");
    }
    else if (celsius > 25 && celsius <= 35) {
        printf("Temperature Category: Hot\n");
        printf("Weather Advisory: Stay Cool\n");
    }
    else {
        printf("Temperature Category: Extreme Heat\n");
        printf("Weather Advisory: Stay Hydrated\n");
    }
}
