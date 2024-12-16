//Append data on existing file
#include <stdio.h>
int main() 
{
    FILE *fptr;
    fptr = fopen("example.txt", "a");
    if (fptr == NULL) 
	{  	
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(fptr, "This line is appended to the file.\n");

    fclose(fptr);
    printf("Data appended successfully.\n");

    return 0;
}

