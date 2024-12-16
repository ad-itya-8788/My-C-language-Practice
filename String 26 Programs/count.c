//Count Total Alphabate digit and special character
#include <stdio.h>
int main() 
{
    char str[100];
    int countA = 0, d = 0, sc = 0;
    int i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    for(i = 0; str[i] != '\0'; i++) 
	{
        if((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)) 
		{
            countA++; 
        }
        else if(str[i] >= 48 && str[i] <= 57) 
		{
            d++; 
		}
        else 
		{
		sc++;  
		}
    }

    printf("Total Alphabets: %d\n", countA);
    printf("Total Digits: %d\n", d);
    printf("Total Special Characters: %d\n", sc);

    return 0;
}

