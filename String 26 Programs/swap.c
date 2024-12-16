//Swap Two string
#include <stdio.h>
int main() 
{
    char str1[100], str2[100], temp[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    int i = 0;
    while (str1[i] != '\0')
	 {
        temp[i] = str1[i];
        i++;
    }
    temp[i] = '\0';
    i = 0;
    while (str2[i] != '\0') 
	{
        str1[i] = str2[i];
        i++;
    }
    str1[i] = '\0';
    i = 0;
    while (temp[i] != '\0') 
	{
        str2[i] = temp[i];
        i++;
    }
    str2[i] = '\0';
    printf("After swapping:\n");
    printf("First string: %s\n", str1);
    printf("Second string: %s\n", str2);
    return 0;
}

