#include<stdio.h>

int jumbule(int x, int y)
{
    x = 2 * x + y;
    return x;
}

void main()
{
    int x = 2, y = 5;
    y = jumbule(y, x);
    x = jumbule(y, x);

    printf("x = %d \n", x);
} 