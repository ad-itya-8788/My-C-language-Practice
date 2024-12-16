//check the number is prime or not
#include <stdio.h>
int main() 
{
    int num, i,ip=1;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i=2;i<=num/2;i++) 
	{
        if (num % i == 0) 
		{
            ip = 0;
            break;
        }
    }
    if (ip&& num>1)
	 {
        printf("%d is a prime number.\n", num);
     }
	else
	{
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}

