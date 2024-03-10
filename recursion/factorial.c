#include<stdio.h>

int factorial(int n)
{
    int x;
    if(n < 1) return 1;
    else{
        x = n * factorial(n - 1);
        return x;
    }
}

void main()
{
    int a;
    a = factorial(5);
    printf("%d ", a);
}