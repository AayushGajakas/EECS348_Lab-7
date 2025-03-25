#include <stdio.h>
#include "temperature.h"

int main() {
    float input_temp;
    char from_scale, to_scale;

    printf("Enter the temperature followed by its scale (C, F, or K): ");
    scanf("%f %c", &input_temp, &from_scale);

    printf("Convert to which scale? (C, F, or K): ");
    scanf(" %c", &to_scale);  // Note: space before %c to skip whitespace

    float temp_celsius;
    float converted_temp;

    // Step 1: Normalize input to Celsius
    if (from_scale == 'F' || from_scale == 'f') {
        temp_celsius = fahrenheit_to_celsius(input_temp);
    } else if (from_scale == 'K' || from_scale == 'k') {
        temp_celsius = kelvin_to_celsius(input_temp);
    } else if (from_scale == 'C' || from_scale == 'c') {
        temp_celsius = input_temp;
    } else {
        printf("Invalid input scale.\n");
        return 1;
    }

    // Step 2: Convert to target scale
    if (to_scale == 'F' || to_scale == 'f') {
        converted_temp = celsius_to_fahrenheit(temp_celsius);
    } else if (to_scale == 'K' || to_scale == 'k') {
        converted_temp = celsius_to_kelvin(temp_celsius);
    } else if (to_scale == 'C' || to_scale == 'c') {
        converted_temp = temp_celsius;
    } else {
        printf("Invalid target scale.\n");
        return 1;
    }

    // Step 3: Display result
    printf("\nConverted Temperature: %.2f %c\n", converted_temp, to_scale);

    // Step 4: Categorize temperature in Celsius
    categorize_temperature(temp_celsius);

    return 0;
}
