//GCD 
#include <stdio.h>
int gcd(int a, int b)
{
    return (b == 0) ? a : gcd(b, a % b);
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("GCD: %d\n", gcd(x, y));
    return 0;
}

