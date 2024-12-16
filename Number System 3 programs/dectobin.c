//decimal to binary
#include <stdio.h>
void decimalToBinary()
 {
    int decimal, binary = 0, base = 1, rem;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while (decimal > 0)
	 {
        rem = decimal % 2;
        binary = binary + rem * base;
        decimal = decimal / 2;
        base = base * 10;
    }

    printf("Binary equivalent: %d\n", binary);
}

int main() 
{
    decimalToBinary();
    return 0;
}

