//Accept and display 2d string
#include <stdio.h>
int main() 
{
    int n;
	printf("Enter Number of Citys:");
	scanf("%d",&n);   
	getchar();       
    char strings[n][10];
    int i;
    printf("Enter %d City (each up to 10 characters):\n", n);
    for(i = 0; i < n; i++) 
	{
        printf("City %d: ", i + 1);
        gets(strings[i]);
    }

    printf("\nYou entered City Names:\n");
    for (i = 0; i < n; i++) 
	{
        printf("String %d: %s\n", i + 1, strings[i]);
    }

    return 0;
}

