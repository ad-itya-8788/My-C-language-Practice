//allocate memroy to the strecture dynamically
#include <stdio.h>
#include <stdlib.h>
struct Person 
{
    char name[50];
    int age;
};

int main()
 {
    struct Person *p = (struct Person *)malloc(sizeof(struct Person));

    printf("Enter name: ");
    fgets(p->name, 50, stdin);

    printf("Enter age: ");
    scanf("%d", &p->age);

    printf("Name: %s", p->name);

    printf("Age: %d\n", p->age);

    free(p);
    return 0;
}

