//write multiple line
#include <stdio.h>
int main() 
{
    FILE *fptr;
    fptr = fopen("multiline.txt", "w");

    if (fptr == NULL)
	{
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(fptr, "This is the first line.\n");
    fprintf(fptr, "This is the second line.\n");
    fprintf(fptr, "This is the third line.\n");

    fclose(fptr);
    printf("Multiple lines written to the file successfully.\n");

    return 0;
}

