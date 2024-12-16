#include <stdio.h>
int main() 
{
    int month;
    printf("Enter the month number (1-12): ");
    scanf("%d", &month);
    switch (month) 
	{
        case 12: case 1: case 2: 
            printf("Winter\n");
            break;
        case 3: case 4: case 5:
            printf("Summer\n");
            break;
        case 6: case 7: case 8:
            printf("Mansoon\n");
            break;
        default:
            printf("Invalid month.\n");
            break;
    }

    return 0;
}

