#include<stdio.h>

int main()
{
    int a[] = {1, 0, 4, -8, 20};
    int *p = &a[3];

    // printf("post increment of pointer %d\n", *p++);
    // printf("pre increment of pointer %d\n", *++p);

    // printf("post increment of pointer = %d second pointer = %d\n\n\n", *p++, *p++);

    // printf("pre decrement of pointer %d\n", *--p);
    // printf("post decrement of pointer %d\n", *p--);

    // printf("pre decrement of pointer %d\n", --(*p));

    // printf("p = %d\n", (*p)++);

    printf("p = %d\n", ++(*p));

    printf("post decrement of pointer = %d second pointer = %d third pointer %d\n", *p--, *p--, *p--);
}