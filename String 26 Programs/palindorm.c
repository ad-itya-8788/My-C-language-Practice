//Check given string is palindorm or not
#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str); 
    int flag = 1, i, j;
    int n = strlen(str); 
    for (i = 0, j = n - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])  
        {
            flag = 0;  
            break; 
        }
    }
    if (flag)
    {
        printf("String is palindrome\n");
    }
    else
    {
        printf("String is not palindrome\n");
    }

    return 0;
}

