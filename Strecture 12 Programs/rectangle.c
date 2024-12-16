//passing strecture to function
#include <stdio.h>
struct Rectangle 
{
    float length;
    float breadth;
};

float calculate_area(struct Rectangle r) 
{
    return r.length * r.breadth;
}

int main()
{
    struct Rectangle r;

    printf("Enter length of the rectangle: ");
    scanf("%f", &r.length);

    printf("Enter breadth of the rectangle: ");
    scanf("%f", &r.breadth);

    float area = calculate_area(r);

    printf("\nThe area of the rectangle is: %.2f\n", area);

    return 0;
}

