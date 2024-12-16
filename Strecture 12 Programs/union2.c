//union represent data type
#include <stdio.h>
union Data 
{
    int i;
    float f;
    char c;
};

int main() 
{
    union Data d;

    d.i = 42;
    printf("Integer: %d\n", d.i);

    d.f = 3.14;
    printf("Float: %.2f\n", d.f);

    d.c = 'A';
    printf("Character: %c\n", d.c);
    
    printf("\nNote: Union size is: %lu bytes\n", sizeof(d));

    return 0;
}

