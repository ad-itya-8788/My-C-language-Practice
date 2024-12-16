//using calloc allocate memroy
#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int i;
    int *arr = (int *)calloc(5, sizeof(int)); 
    for( i = 0; i < 5; i++) 
	{
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}

//this program print five times 0 becoz malloc initalize all with 0
