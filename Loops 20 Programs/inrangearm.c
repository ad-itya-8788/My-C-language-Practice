//Print armstrong number between range
#include <stdio.h>
int main()
{
    int n, r = 0, range;
    printf("Enter the range: ");
    scanf("%d", &range);
    printf("Armstrong numbers between 1 and %d are:\n", range);
    for (n = 1; n <= range; n++)
    {
        int x = n;
        int arm = 0;
        while (x != 0)
        {
            r = x % 10;
            arm += r * r * r;
            x /= 10;
        }
        if (arm == n)
        {
            printf("%d ", n);
        }
    }

    return 0;
}

