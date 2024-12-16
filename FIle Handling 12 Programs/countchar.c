//count the number of char from file
#include <stdio.h>
int main() 
{
    FILE *fptr;
    char ch;
    int count = 0;

    fptr = fopen("example.txt", "r");

    if (fptr == NULL) 
	{	
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(fptr)) != EOF)
	 {
        count++;
    }

    printf("The number of characters in the file: %d\n", count);

    fclose(fptr);
    return 0;
}

