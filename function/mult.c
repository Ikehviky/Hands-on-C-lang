#include<stdio.h>

void mult(void);

void main()
{
    mult();
}

void mult()
{
    int a = 4, b = 5, mult = 0;
    mult = a * b;
    printf("mult = %d\n", mult);
}