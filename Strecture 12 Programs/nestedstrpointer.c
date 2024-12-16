//nested strectue using union
#include <stdio.h>
struct Address
{
    int house_no;
    char city[50];
};

struct Student 
{
    int roll_no;
    char name[50];
    struct Address address;
};

void display_student(struct Student *ptr) 
{
    printf("Roll Number: %d\n", ptr->roll_no);
    printf("Name: %s\n", ptr->name);
    printf("House Number: %d\n", ptr->address.house_no);
    printf("City: %s\n", ptr->address.city);
}

int main() {
    struct Student s, *ptr;
    ptr = &s;

    printf("Enter roll number: ");
    scanf("%d", &ptr->roll_no);

    printf("Enter name: ");
    scanf("%s", ptr->name);

    printf("Enter house number: ");
    scanf("%d", &ptr->address.house_no);

    printf("Enter city: ");
    scanf("%s", ptr->address.city);

    printf("\nStudent Details:\n");
    display_student(ptr);

    return 0;
}

