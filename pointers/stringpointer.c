#include<stdio.h>

void main()
{
    char str[] = "welcome to jenney's lectures";
    char *ptr = str;
    printf("%c\n", *ptr);
    printf("%c \n", *(ptr++ +1));
    printf("%c \n", *((ptr-- +5)-1)+3);
    printf("%c\n", *(++ptr +10)- 32);
    printf("%c %c %c\n", *ptr, *++ptr, *--ptr);
}