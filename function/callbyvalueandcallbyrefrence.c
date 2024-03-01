#include<stdio.h>

// CALL BY VALUE FUNCTION
// void func(int, int); //function declaration
// void main()
// {
//     int x = 5, y = 7;
//     func(x, y);
//     printf("x = %d Y = %d\n", x, y);
// }

// void func(int x, int y) // function definition
// {
//     x = 7;
//     y = 5;

//     printf("x = %d y = %d\n", x, y);
// }

// CALL BY REFERENCE FUNCTION
void func(int *, int *); //function declaration
void main()
{
    int x = 5, y = 7;
    func(&x, &y);
    printf("x = %d Y = %d\n", x, y);
}

void func(int *x, int *y) // function definition
{
    *x = 7;
    *y = 5;

    printf("x = %d y = %d\n", *x, *y);
}