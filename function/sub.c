#include<stdio.h>

void sub(void);

void main()
{
    sub();
}

void sub()
{
    int a = 4, b = 5, sub = 0;
    sub = a - b;
    printf("sub = %d\n", sub);
}