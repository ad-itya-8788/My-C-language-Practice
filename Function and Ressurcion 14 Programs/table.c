//Multiplaction table
#include <stdio.h>
void printTable(int num)
 {
 	int i;
    printf("Multiplication table for %d:\n", num);
    for( i = 1; i <= 10; i++)
	{
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

int main()
 {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printTable(number);
    return 0;
}

