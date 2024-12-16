// Program to Convert Celsius to Fahrenheit
#include <stdio.h>
int main() {
    float cel, fer;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &cel);
    fer = (cel* 9 / 5) + 32;
    printf("The temperature in Fahrenheit is: %.2f\n", fer);
    return 0;
}

