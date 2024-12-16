// C Program to Compute Quotient and Remainder
#include <stdio.h>
int main() 
{
    int dividend, divisor, quotient, remainder;
    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    printf("\nQuotient = %d", quotient);
    printf("\nRemainder = %d", remainder);
    return 0;
}

