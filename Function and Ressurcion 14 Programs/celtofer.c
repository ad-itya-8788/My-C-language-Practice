//calculate cel to fer
#include <stdio.h>
float celsiusToFahrenheit(float celsius) 
{
    return (celsius * 9 / 5) + 32;
}

int main() {
    float celsius;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    printf("Temperature in Fahrenheit: %.2f\n", celsiusToFahrenheit(celsius));
    return 0;
}

