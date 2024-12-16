//allocate memroy for string
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() 
{
    char *str = (char *)malloc(50 * sizeof(char)); 
    
    printf("Enter a string: ");
    fgets(str, 50, stdin);

    printf("You entered: %s", str);

    free(str);
    return 0;
}

