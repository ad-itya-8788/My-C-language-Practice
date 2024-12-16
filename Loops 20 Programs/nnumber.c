//print first n natrual number
#include <stdio.h>
int main() 
{
    int n;
    int i;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++) 
	{
        printf("%d ", i);
    }
    return 0;
}

