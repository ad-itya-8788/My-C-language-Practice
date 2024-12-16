//Employe Sallery
#include <stdio.h>
struct Employee 
{
    char name[50];
    int age;
    float salary;
};

int main() 
{
    struct Employee e[3];
    int i;
    printf("Enter details for 3 employees:\n");
    for (i=0;i<3;i++)
	 {
        printf("\nEmployee %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", e[i].name);

        printf("Enter age: ");
        scanf("%d", &e[i].age);

        printf("Enter salary: ");
        scanf("%f", &e[i].salary);
    }

    printf("\nEmployee Details:\n");
    for (i = 0; i < 3; i++) 
	{
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: %s\nAge: %d\nSalary: %.2f\n", e[i].name, e[i].age, e[i].salary);
    }

    return 0;
}

