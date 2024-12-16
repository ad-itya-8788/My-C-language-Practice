//print biggest number among three using ternery operator
#include <stdio.h>
int main() 
{
    int a = 4, result;
    result = (a > 5) ? 10 : (a > 3) ? 20 : 30;
    printf("Result: %d\n", result);  
	  return 0;
}

