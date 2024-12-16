//check file is exist or not
#include <stdio.h>
int main() 
{
    FILE *fptr;
    fptr = fopen("example.txt", "r");

    if (fptr == NULL)
	{
        printf("File does not exist.\n");
    } 
	else
	 {
        printf("File exists.\n");
        fclose(fptr);
    }

    return 0;
}

