//Do the first char into uppercase of each word
#include <stdio.h>
int main() 
{
    char str[100];
    int i = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    if (str[0] >= 'a' && str[0] <= 'z') 
	{
        str[0] = str[0] - 32;  
    }
    while (str[i] != '\0') 
	{
        if (str[i] == ' ' && str[i + 1] >= 'a' && str[i + 1] <= 'z')
		{
            str[i + 1] = str[i + 1] - 32;  
        }
        i++;
    }

    printf("String after capitalizing first letter of each word: %s\n", str);
    return 0;
}

