//Accept And Display Array Using Dynamic Memory allocation
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a;
	int n;
	printf("Enter size:");
	scanf("%d",&n);
	a=(int*)malloc(sizeof(int)*n);
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("Enter %d Element:",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("Given Array:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	
	return 0;
}
