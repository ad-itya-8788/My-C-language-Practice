//remove digit form string
#include <stdio.h>
int main() 
{
    char str[100], result[100];
    int i = 0, j = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    while (str[i] != '\0') 
	{
        if (str[i] < '0' || str[i] > '9') 
		{
            result[j++] = str[i];
        }
        i++;
    }
    result[j] = '\0';
    printf("String after removing digits: %s\n", result);
    return 0;
}

