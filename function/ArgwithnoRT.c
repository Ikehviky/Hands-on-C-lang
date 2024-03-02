#include<stdio.h>

void sum(int, int);

void main()
{
    int a, b;
    printf("Enter you a and b: \n");
    scanf("%d %d", &a, &b);
    sum(a, b);
}

void sum(int a, int b)
{
    int s = 0;
    s = a + b;
    printf("sum = %d\n", s);
}