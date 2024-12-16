//Union example
#include <stdio.h>
union Employee 
{
    int id;
    char name[50];
    float salary;
};

int main() 
{
    union Employee e;
    e.id = 101;
    
    printf("Employee ID: %d\n", e.id);
    
    printf("Enter Employee Name: ");
    scanf("%s", e.name);
    
    
    printf("Employee Name: %s\n", e.name);
    e.salary = 50000.50;
    
    printf("Employee Salary: %.2f\n", e.salary);
    
    printf("\nNote: Memory is shared, so previous values get overwritten.\n");

    return 0;
}

