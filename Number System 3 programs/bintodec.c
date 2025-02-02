//C Program to Convert Binary Number to Decimal
#include <stdio.h>
#include <math.h>
void binaryToDecimal()
 {
    int binary, decimal = 0, base = 1, rem;
    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while (binary > 0) 
	{
        rem = binary % 10;
        decimal = decimal + rem * base;
        binary = binary / 10;
        base = base * 2;
    }

    printf("Decimal equivalent: %d\n", decimal);
}

int main() 
{
    binaryToDecimal();
    return 0;
}

