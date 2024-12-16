//swap two numbers
#include <stdio.h>
void swapNumbers(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() 
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Before swap: x = %d, y = %d\n", x, y);
    swapNumbers(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);
    return 0;
}

