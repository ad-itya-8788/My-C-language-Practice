//create new file and write data
#include <stdio.h>
int main() 
{
    FILE *fptr;
    fptr = fopen("example.txt", "w");
   

    fprintf(fptr, "Hello, this is a test file.\n");
    fprintf(fptr, "This file is created and written using C.\n");

    fclose(fptr);
    printf("Data written to file successfully.\n");

    return 0;
}

