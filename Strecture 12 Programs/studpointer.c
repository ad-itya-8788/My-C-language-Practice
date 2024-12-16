//Store and Display Student Details (Using Pointer)
#include <stdio.h>
struct Student 
{
    char name[50];
    int roll_no;
    float marks;
};

int main() 
{
    struct Student s, *ptr;
    ptr = &s;

    printf("Enter name: ");
    scanf("%s", ptr->name);

    printf("Enter roll number: ");
    scanf("%d", &ptr->roll_no);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    printf("\nStudent Details:\n");
    printf("Name: %s\nRoll Number: %d\nMarks: %.2f\n", ptr->name, ptr->roll_no, ptr->marks);

    return 0;
}

