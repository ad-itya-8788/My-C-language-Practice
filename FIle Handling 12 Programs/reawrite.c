//read write simultinously
#include <stdio.h>
int main() 
{
    FILE *fptr;
    char str[100];
    
    fptr = fopen("example.txt", "r+");

    if (fptr == NULL) 
	{
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter text to modify the file: ");
    fgets(str, sizeof(str), stdin);

    fputs(str, fptr);

    rewind(fptr);  
	    
	while (fgets(str, sizeof(str), fptr)) 
	{
        printf("%s", str);
    }

    fclose(fptr);
    return 0;
}

