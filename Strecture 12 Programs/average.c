//calculate average
#include <stdio.h>
struct Student 
{
    int marks[3]; 
};
int main()
 {
    struct Student s;
    int total = 0,i;
    float average;
    printf("Enter marks for 3 subjects:\n");
    for ( i = 0; i<3;i++)
	 {
        printf("Subject %d: ", i + 1);
        scanf("%d", &s.marks[i]);
        total += s.marks[i];
     }
    average = total / 3.0;

    printf("\nTotal Marks: %d\n", total);
    printf("Average Marks: %.2f\n", average);

    return 0;
}

