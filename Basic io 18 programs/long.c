//. C Program to Demonstrate the Working of Keyword long
#include <stdio.h>
int main() 
{
    long num;
    //num=124523525l; declaration end using l
    printf("Enter a long integer: ");
    scanf("%ld", &num);
    printf("You entered: %ld", num);
    return 0;
}

