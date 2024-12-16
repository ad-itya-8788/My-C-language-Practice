//20. Check if Two Strings are Anagrams
#include <stdio.h>
int main() 
{
    char str1[100], str2[100];
    int i, j, count = 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    for (i = 0; str1[i] != '\0'; i++)
	 {
        count++;
    }

    int len = 0;
    for (i = 0; str2[i] != '\0'; i++) 
	{
        len++;
    }

    if (count != len) 
	{
        printf("The strings are not anagrams.\n");
        return 0;
    }

    // Check if characters match
    for (i = 0; str1[i] != '\0'; i++) {
        for (j = 0; str2[j] != '\0'; j++) {
            if (str1[i] == str2[j]) {
                str2[j] = '#';  // Mark it as checked
                break;
            }
        }
    }

    printf("The strings are anagrams.\n");
    return 0;
}

