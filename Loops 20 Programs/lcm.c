//print LCM
#include <stdio.h>
int main() 
{
    int a, b, lcm, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b); 
    max = (a > b) ? a : b;
    while (1) 
	{
        if (max % a == 0 && max % b == 0) 
		{
            lcm = max;
            break;
        }
        max++;
    }
    printf("LCM of %d and %d is: %d\n", a, b, lcm);

    return 0;
}
/*
Numbers: 4 aur 6
4 multiples: 4, 8, 12, 16, 20...
6 multiples: 6, 12, 18, 24...
Common multiples: 12, 24...
Smallest common multiple: 12
4 or  6 LCM is 12.
*/
