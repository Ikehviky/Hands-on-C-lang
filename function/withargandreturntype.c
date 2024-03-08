#include<stdio.h>

int sum(int, int);

void main()
{
    int a, b, c;
    printf("Enter a and b numbers: \n");
    scanf("%d %d", &a, &b);
    c = sum(a, b);
    printf("sum = %d\n", c);
}

int sum(int a, int b)
{
    return a + b;
}