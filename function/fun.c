#include<stdio.h>

char fun();

void main()
{
    char ch;
    ch = fun();
    printf("ch = %c\n", ch);
}

char fun()
{
    char c;
    printf("Enter a character: \n");
    scanf("%c", &c);
    return 'c';
}