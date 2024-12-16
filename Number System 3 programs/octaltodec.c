//oct to decimal
#include <stdio.h>
#include <math.h>
void octalToDecimal()
 {
    int octal, decimal = 0, base = 0, rem;
    printf("Enter an octal number: ");
    scanf("%d", &octal);
    while (octal > 0) 
	{
        rem = octal % 10;
        decimal = decimal + rem * pow(8, base);
        octal = octal / 10;
        base++;
    }

    printf("Decimal equivalent: %d\n", decimal);
}

int main()
{
    octalToDecimal();
    return 0;
}

