//allocate dma for 2d string
#include <stdlib.h>
#include <string.h>
int main() 
{
    int n = 3;
    char **arr = (char **)malloc(n * sizeof(char *));  
	int i;
   for(i = 0; i < n; i++) 
   {
        arr[i] = (char *)malloc(50 * sizeof(char));
   }
    
   for(i = 0;i<n;i++) 
    {
        printf("Enter string %d: ", i + 1);
        gets(arr[i]);
	}
	
  for(i=0;i<n;i++)
      {
        printf("String %d: %s\n", i + 1, arr[i]);
        free(arr[i]); 
     }

    free(arr);  
    return 0;
}

