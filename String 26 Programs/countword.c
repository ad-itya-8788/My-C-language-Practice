//Count the number of word
#include <stdio.h>
int main() 
{
    char str[100];
    int i = 0, words = 1;
    printf("Enter a string: ");
    gets(str);
    while (str[i] != '\0') 
	{
        if (str[i] == ' ') 
		{
            words++;
        }
        i++;
    }

    printf("Number of words: %d\n", words);
    return 0;
}

