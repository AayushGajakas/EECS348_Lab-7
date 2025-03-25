#include <stdio.h>
#include "temperature.h"

int main() {
    float input_temp;
    int from_scale, to_scale;

    printf("Enter the temperature: ");
    scanf("%f", &input_temp);

    printf("Choose the current scale (1) Celsius, (2) Fahrenheit, (3) Kelvin: ");
    scanf("%d", &from_scale);

    printf("Convert to (1) Celsius, (2) Fahrenheit, (3) Kelvin: ");
    scanf("%d", &to_scale);

    float temp_celsius;
    float converted_temp;
    char unit = ' ';

    // Step 1: Convert input to Celsius
    switch (from_scale) {
        case 1: temp_celsius = input_temp; break;
        case 2: temp_celsius = fahrenheit_to_celsius(input_temp); break;
        case 3: temp_celsius = kelvin_to_celsius(input_temp); break;
        default:
            printf("Invalid input scale.\n");
            return 1;
    }

    // Step 2: Convert Celsius to target scale
    switch (to_scale) {
        case 1: converted_temp = temp_celsius; unit = 'C'; break;
        case 2: converted_temp = celsius_to_fahrenheit(temp_celsius); unit = 'F'; break;
        case 3: converted_temp = celsius_to_kelvin(temp_celsius); unit = 'K'; break;
        default:
            printf("Invalid target scale.\n");
            return 1;
    }

    // Step 3: Print output
    printf("\nConverted temperature: %.2f°%c\n", converted_temp, unit);

    // Step 4: Categorize temperature
    categorize_temperature(temp_celsius);

    return 0;
}
