//remove all occuance of character
#include <stdio.h>
void removeac(char str[], char ch) 
{
    int i, j = 0;
    for(i = 0; str[i] != '\0'; i++) 
	{
        if(str[i] != ch) 
		{
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() 
{
    char str[100], ch;
    printf("Enter a string: ");
    gets(str);
    printf("Enter the character to remove: ");
    scanf("%c", &ch);
    removeac(str, ch);
    printf("String after removal: %s", str);
    return 0;
}

