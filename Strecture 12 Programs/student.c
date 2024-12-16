/*Write a program to define a structure for a student containing name, 
roll_no, and marks. Take input from the user and display it.*/
#include <stdio.h>
struct Student 
{
    char name[50];
    int roll_no;
    float marks;
};
int main() 
{
    struct Student s;

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\n**Student Details**\n");
    printf("Name: %s\nRoll Number: %d\nMarks: %.2f\n", s.name, s.roll_no, s.marks);

    return 0;
}

