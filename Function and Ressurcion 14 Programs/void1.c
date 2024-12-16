//prit hello n times
#include <stdio.h>
void printHello(int n)
 {
 	int i;
    for(i = 0; i < n; i++) 
	{
        printf("Hello\n");
    }
}

int main() 
{
    int times;
    printf("Enter the number of times to print 'Hello': ");
    scanf("%d", &times);
    printHello(times);
    return 0;
}

