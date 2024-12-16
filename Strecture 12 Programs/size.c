//print size of strecture
#include<stdio.h>
struct node 
{
    int data;
    char ch[90];
};
int main() 
{
    printf("Size of int: %lu\n", sizeof(int));
    printf("Size of char array: %lu\n", sizeof(char[90]));
    printf("Size of struct: %lu\n", sizeof(struct node));
    return 0;
}

/*
padding:compiler give extra space to easily access the value
padding=totalsize_by_compiler - sum of each data type size;
*/
