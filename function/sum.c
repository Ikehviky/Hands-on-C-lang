#include<stdio.h>

void sum(void)
{
    int a, b, sum = 0;

    printf("Enter two numbers: \n");

    scanf("%d %d", &a, &b);
    sum = a + b;

    printf("sum = %d\n", sum);
}

int main()
{
    sum();
    printf("Here is your answer!!\n");

    sum();
    return 0;
}