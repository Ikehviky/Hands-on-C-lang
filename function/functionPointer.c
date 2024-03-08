#include<stdio.h>

/**
 * function prototype: return-type(*pointer name)(data type of the args)
*/

int sum(int, int);

void main()
{ 
    int s = 0;
    int (*ptr)(int, int) = &sum;
    s = (*ptr)(2,3); // or s = ptr(2,3);
    printf("%d\n", s);
}

int sum(int a, int b)
{
   return a+b;
}

// int (*ptr)(int, int) = &sum;// the associativity of this function is from left to right.
 
// int * ptr (int, int); //this function is not same as function pointer. this is simply saying that ptr is a function that has two args and returns a pointer to an integer.

