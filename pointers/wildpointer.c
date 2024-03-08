#include<stdio.h>
#include<stdlib.h>

void main()
{
    //INSTANCE ONE
    // int *ptr;
    // printf("wild:%d\n", *ptr);

    //INSTANCE TWO
    //  int *ptr = NULL;
    // printf("wild:%d\n", *ptr);

    // REMEDY 
    int *ptr = (int *)malloc(sizeof(int));
    *ptr = 50;
    printf("rem: %d\n", *ptr);
}