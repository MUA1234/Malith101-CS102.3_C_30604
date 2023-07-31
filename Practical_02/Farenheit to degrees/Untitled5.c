#include <stdio.h>

float convertToFahrenheit(float celsius) {
    float fahrenheit = (celsius * 9 / 5) + 32;
    return fahrenheit;
}

float convertToCelsius(float fahrenheit) {
    float celsius = (5.0 / 9.0) * (fahrenheit - 32);
    return celsius;
}

int main() {
    float fahrenheit, celsius;

    printf("Enter temperature in degrees Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = convertToCelsius(fahrenheit);
    printf("%.2f degrees Fahrenheit is equal to %.2f degrees Celsius.\n", fahrenheit, celsius);

    return 0;
}
