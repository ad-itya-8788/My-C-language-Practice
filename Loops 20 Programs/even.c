//Even number between 1 to n
#include <stdio.h>
int main() 
{
    int n,i;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Even numbers between 1 and %d are: ", n);
    for (i = 2; i <= n; i += 2)
	 {
        printf("%d ", i);
     }
    return 0;
}

