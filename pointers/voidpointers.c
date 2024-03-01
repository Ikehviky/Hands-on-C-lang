#include<stdio.h>

void main()
{
    void *vp;

    int a = 5;
    float b = 5;
    char c = 'v';

    vp = &a;
    printf("%d \n ", *(int*)vp);

    vp = &b;
    printf("%f \n", *(float*)vp);

    vp = &c;
    printf("%c \n", *(char*)vp);
}