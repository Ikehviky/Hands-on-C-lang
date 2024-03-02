#include<stdio.h>

void div(void);

void main()
{
    div();
}

void div()
{
    int a = 4, b = 5, div = 0;
    div = a - b;
    printf("div = %d\n", div);
}