//convert lowercase char to uppercase
#include <stdio.h>
int main() 
{
    char str[100];
    int i = 0;
    printf("Enter a string in lower case: ");
    scanf("%s", str);
    while (str[i] != '\0')
	 {
        if (str[i] >= 'a' && str[i] <= 'z') 
		{
            str[i] = str[i] - 32; 
        }
        i++;
    }

    printf("Uppercase string: %s\n", str);
    return 0;
}

