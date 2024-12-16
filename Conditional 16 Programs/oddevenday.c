//check day is even or odd
#include <stdio.h>
int main() 
{
    int day;    
    printf("Enter day of the month: ");
    scanf("%d", &day);
    switch (day % 2) 
	{
        case 0: 
		printf("It's an even day.\n"); 
		       break;
	    case 1: 
	    printf("It's an odd day.\n"); 
		       break;
		default: 
		printf("Invalid input.\n");
    }
    
    return 0;
}

