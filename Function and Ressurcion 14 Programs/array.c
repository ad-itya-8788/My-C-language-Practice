//print array
#include <stdio.h>
void displayArray(int arr[], int size)
 {
 	int i;
    printf("Array elements are: ");
    for (i = 0; i < size; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() 
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int i;
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
	{
        scanf("%d", &arr[i]);
    }

    displayArray(arr, n);
    return 0;
}

