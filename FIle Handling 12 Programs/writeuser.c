//write user input on file
#include <stdio.h>
int main() 
{
    FILE *fptr;
    char str[100];
    
    fptr = fopen("user_input.txt", "w");

    if(fptr == NULL) 
	{
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter text to write to the file: ");
    fgets(str, sizeof(str), stdin);

    fputs(str, fptr);

    fclose(fptr);

    printf("User input written to the file successfully.\n");

    return 0;
}

