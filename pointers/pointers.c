#include<stdio.h>
#include<stdint.h>

int main()
{
    int a = 20, b = 9, c;
    int *p, *q;

    p = &a;
    q = &b; 
    c = *p;

    *p = 10;

    //Accessing the values of the variables
    printf("Value of a %d\n", a);
    printf("Value of b %d\n", b);

    //Accessing the values from pointers
    printf("Value of a from a pointer %d\n", *p);
    printf("Value of a by *(&a) %d\n", *(&a));

    //The address
    printf("address of p  %p\n", &p);
    printf(" value of p  %p\n", p);
    printf("address of a %p\n", &a);
    printf("address of b %p\n", &b);
    printf("address of c %p\n", &c);

    printf("c = %d\n", c);

}