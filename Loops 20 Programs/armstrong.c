//check armstrong
#include<stdio.h>
int main()
{
	int n,r=0;
	printf("Enter A number:");
	scanf("%d",&n);
	int x=n;
	int arm=0;
	
	while(n!=0)
	{
		r=n%10;
		arm=r*r*r+arm;
		n=n/10;
	}
	if(arm==x)
	{
	 printf("This is armstrong");
	}
	else
	{
		printf("Not armstrong");
	}
}
