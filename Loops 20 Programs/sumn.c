//Sum of first n natural number
#include <stdio.h>
int main() 
{
    int n, i,sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
	 {
        sum += i;
     }
    printf("Sum of first %d natural numbers: %d\n", n, sum);
    return 0;
}

