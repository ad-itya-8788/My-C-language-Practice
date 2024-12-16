//Reverse the String
#include <stdio.h>
#include<string.h>
int main() 
{
    char str[100], rev[100];
    int i;
    printf("Enter a string:");
    scanf("%s", str);
    int len=strlen(str);
    int j=0;
    for (i=len-1;i>=0;i--) 
	{
        rev[j] = str[i];
        j++;
    }
    rev[j]='\0';
    printf("Reversed string: %s\n", rev);
    return 0;
}

