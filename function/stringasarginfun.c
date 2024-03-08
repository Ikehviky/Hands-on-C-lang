#include<stdio.h>

void modify(char*, char *);

void main()
{
    char str1[] = "victor";
    char str2[] = "ikeh";

    modify(str1, str2);
}

void modify(char* str1, char* str2)
{
    int i, len = 0;
    for(i = 0; str1[i] != '\0'; i++)
    {
        len = len + 1;
    }
    printf("The length of string 1 is %d \n", len);
    str2[0] = 'I';
    printf("The modification of string 2 is %s \n", str2);
}