#include<stdio.h>

int main()
{
    int a[5] = {1, -1, 0, 10, 11};
    int *p = &a[0];
    printf("value of p %p\n", p);
    printf("int value of p %d\n", *p);

    p = p + 1;
    *p = 2;
    printf("value of p %p\n", p);
    printf("int value of ***p %d\n", *p);

    p = &a[4];
    printf("value of p %p\n", p);
    printf("int value of p %d\n", *p);
    printf("value of p %d\n", *p);
}