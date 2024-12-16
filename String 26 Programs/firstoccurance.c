//remove occurance of char
#include <stdio.h>
void removef(char str[], char ch) 
{	
    int i, j;
    for(i = 0; str[i] != '\0'; i++) 
	{
        if(str[i] == ch) 
		{
             for(j = i; str[j] != '\0'; j++) 
			 {
                str[j] = str[j + 1];
             }
            return;
		 }
    }
}

int main()
 {
    char str[100], ch;
    printf("Enter a string: ");
    gets(str);
    printf("Enter the character to remove: ");
    scanf("%c", &ch);  
    removef(str, ch);  
    printf("String after removal: %s", str);  // Print the modified string
    return 0;
}

