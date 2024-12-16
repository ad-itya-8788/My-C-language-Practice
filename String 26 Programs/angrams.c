//20. Check if Two Strings are Anagrams(first string char present in second string all)
#include <stdio.h>
int main() 
{
    char str1[100], str2[100];
    int i, j, count,len= 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);
    count=strlen(str1);
    len=strlen(str2);
    if (count != len) 
	{
        printf("The strings are not anagrams.\n");
        return 0;
    }

    for (i = 0; str1[i] != '\0'; i++) 
	{
        for (j = 0; str2[j] != '\0'; j++) 
		{
            if (str1[i] == str2[j])
			 {
                break;
            }
        }
    }

    printf("The strings are anagrams.\n");
    return 0;
}

