#include<stdio.h>

int main()
{
    int a = 10, b = 9;
    int *p, *q;
    p = &a;
    q = p;

    printf("value of a %d %d %d\n", a, *p, *q);

    // printf("value of q   %p\n", q);
    // printf("address of q %p\n", &q);
    // printf("value of q from the parent %d\n", *q);

    // printf("value of a   %p\n", q);

    // printf("value of p   %p\n", p);
    // printf("address of a %p\n", &a);

    // printf("address of p %p\n", &p);

}