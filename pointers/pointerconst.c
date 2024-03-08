#include<stdio.h>

void main()
{
     int a = 10;
     int *p;
     p = &a;

    *p = -11;

    printf("%d\n", a);
}