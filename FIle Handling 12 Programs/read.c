//Read data from file
#include <stdio.h>
int main() 
{
    FILE *fptr;
    char str[100];
    fptr = fopen("example.txt", "r");

    if(fptr == NULL) 
	{
        printf("Error opening file.\n");
        return 1;
    }

    while (fgets(str, sizeof(str), fptr) != NULL)
	{
        printf("%s", str);
    }

    fclose(fptr);

    return 0;
}

