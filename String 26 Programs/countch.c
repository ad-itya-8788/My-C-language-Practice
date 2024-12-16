//Count Occurance of char in string
#include <stdio.h>
int main() 
{
    char str[100], ch;
    int i = 0, count = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    printf("Enter a character to find: ");
    scanf(" %c", &ch);
    
    while (str[i] != '\0') 
	{
        if (str[i] == ch) 
		{
            count++;
        }
        i++;
    }
    printf("The character '%c' appears %d times.\n", ch, count);
    return 0;
}

