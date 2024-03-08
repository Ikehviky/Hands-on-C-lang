#include<stdio.h>

int sum(void);

void main()
{
    int s;
    s = sum();
    printf("sum = %d\n", s);

}

int sum()
{
    int a, b;
    printf("Enter number a and b: \n");
    scanf("%d %d", &a, &b);
    return a + b;
}