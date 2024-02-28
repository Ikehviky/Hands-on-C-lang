#include<stdio.h>

int main()
{
    int a = 10;
    int *p = &a;
    int **q = &p;
    int ***r = &q;

    ***r = 26;

    printf("a= %d\n", a);
    printf("a= %d\n", *p);
    printf("a= %d\n", *(*q));
    printf("a= %d\n", *(*(*r)));

    printf("address of q=%p %p\n", r, &q);
    printf("address of p=%p %p\n", q, &p);
}