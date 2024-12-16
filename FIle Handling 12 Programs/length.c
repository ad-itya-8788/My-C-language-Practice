//find length of file
#include <stdio.h>
int main() 
{
    FILE *fptr;
    fptr = fopen("example.txt", "r");

    if (fptr == NULL) 
	{
        printf("Error opening file.\n");
        return 1;
    }

    fseek(fptr, 0, SEEK_END);
    long length = ftell(fptr);


    printf("The length of the file is: %ld bytes\n", length);
    fclose(fptr);
    return 0;
}

