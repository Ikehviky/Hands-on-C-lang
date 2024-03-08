#include<stdio.h>

void main()
{
    int a[] = {0, 1, -1, 10, 11};
    int *p = &a[0];
    int *q = &a[3];
    int d;

    printf("q-p=%d\n", q-p);
    // printf("p-q=%d\n", p-q);
    printf("value = %d\n", *q);
    q = q-2;
    printf("q = %d", *q);

    //ASSIGNMENT
    printf("p-q=%d\n", p-q);
    *q = 25;
    printf("q=%u\n", *q);
    d = q - p;
    printf("d=%u\n", d);
    q = q - 3;
    printf("q=%d\n", q);

}