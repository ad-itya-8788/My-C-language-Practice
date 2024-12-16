//Print odd number
#include <stdio.h>
int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int i;
    printf("Odd numbers between 1 and %d are: ", n);
    for (i = 1; i <= n; i += 2) 
	{
        printf("%d ", i);
    }
    return 0;
}

