#include<stdio.h>
#include<stdint.h>

int main()
{
    int a = 20, b = a, c;
    int *p, *q;

    p = &a;
    q = &b; 
    c = *p;

    printf("Value of a %d\n", a);
    printf("Value of b %d\n", b);
    printf("Value of a %d\n", *p);
    printf("Value of a %d\n", *(&a));
    printf("address of p %p\n", p);
    printf("c = %d\n", c);
    printf("address of a %p\n", &a);
    printf("address of b %p\n", &b);
    printf("address of c %p\n", &c);

}