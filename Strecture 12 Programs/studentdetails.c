//Nested Strecture
#include<stdio.h>
struct address
{
	int house_no;
	char city[50];
};
struct student
{
	int roll_no;
	char name[90];
	struct address addr;
};
int main()
{
	struct student s;
	printf("Enter roll Number:");
	scanf("%d",&s.roll_no);
	
	printf("Enter Name:");
	scanf("%s",s.name);
	
	printf("Enter Houce Number:");
	scanf("%d",&s.addr.house_no);
	
	printf("Enter City Name:");
	scanf("%s",s.addr.city);
	
	printf("**..Student Details..**\n");
	printf("Student Name:%s Student Roll_Number:%d Houce Number:%d City_Name:%s",s.name,s.roll_no,s.addr.house_no,s.addr.city);
	
	return 0;
}
