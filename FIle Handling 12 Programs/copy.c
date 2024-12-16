//copy file form one to other
#include <stdio.h>
int main() 
{
    FILE *source, *destination;
    char ch;
    source = fopen("example.txt", "r");
    if (source == NULL) 
	{
        printf("Error opening source file.\n");
        return 1;
    }

    destination = fopen("destination.txt", "w");
    if (destination == NULL) 
	{
        printf("Error opening destination file.\n");
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) 
	{
        fputc(ch, destination);
    }

    printf("File copied successfully.\n");

    fclose(source);
    fclose(destination);

    return 0;
}

