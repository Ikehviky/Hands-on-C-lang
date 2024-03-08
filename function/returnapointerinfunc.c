#include<stdio.h>

int* returnPointer(int []);

void main()
{
    
    int a[] = {1,2,3,4,5}, *ptr;

    ptr = returnPointer(a);

    printf("The return of a pointer %d\n", *ptr);
}

int * returnPointer(int b[])
{
    b = b + 2;
    return b;
}