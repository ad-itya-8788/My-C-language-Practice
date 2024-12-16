//Employee Salary Details (Using Pointer)
#include <stdio.h>
struct Employee
{
    char name[50];
    int age;
    float salary;
};

int main() 
{
    struct Employee e[3],*ptr;
    ptr=e;
    int i;
    printf("**Enter Employee Details**");
    for(i=0;i<3;i++)
    {
    	printf("\nEnter Employee Name:");
    	scanf("%s",(ptr+i)->name);
    	
    	printf("\nEnter Age:");
    	scanf("%d",&(ptr+i)->age);
    	
    	printf("\nEnter Sallery:");
    	scanf("%f",&(ptr+i)->salary);
	}
	
	printf("Display Details..");
	printf("\nEmploye_Name  Sallery   Age");
	for(i=0;i<3;i++)
	{
	printf("\n %s     %.2f     %d",(ptr+i)->name,(ptr+i)->salary,(ptr+i)->age);
	}
    return 0;
}

