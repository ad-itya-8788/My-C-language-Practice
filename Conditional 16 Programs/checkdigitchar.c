//check given input what is
#include <stdio.h>
#include <ctype.h>
int main() 
{
    char ch;    
    printf("Enter something : ");
    scanf("%c", &ch);
    if (isalpha(ch))
	 {
        printf("This is an alphabet.\n");
     }
    else if (isdigit(ch)) 
	{
        printf("This is a digit.\n");
    }
    else 
	{
        printf("This is neither an alphabet nor a digit.\n");
    }
    return 0;
}

