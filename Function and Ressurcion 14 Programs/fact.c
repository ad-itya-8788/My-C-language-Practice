//factorial using ressurcion
#include <stdio.h>
int factorial(int n) 
{
    return (n == 0 || n == 1) ? 1 : n * factorial(n - 1);
}

int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial: %d\n", factorial(n));
    return 0;
}

