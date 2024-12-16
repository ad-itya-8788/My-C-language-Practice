//Allocate Memory for 2d array
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,r=3,c=3,j;
    int **arr=(int **)malloc(r*sizeof(int*));
	for(i=0;i<r;i++)
	{
	 arr[i]=(int*)malloc(sizeof(int)*c);
	}	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter the value for a[%d][%d]:",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("***Matrix***\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf(" %d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
