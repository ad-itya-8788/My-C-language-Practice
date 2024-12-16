//5. C Program to Multiply Two Floating-Point Numbers

#include <stdio.h>
int main() 
{
    float num1, num2, product;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    product = num1 * num2;
    printf("Product = %.2f", product);
    return 0;
}

