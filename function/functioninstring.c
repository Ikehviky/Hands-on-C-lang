#include <stdio.h>

char * display();

void main()
{
    char * str;
    str = display();
    str[0] = 'Z';
    printf("string is %s\n", str);
}

char * display()
{
    static char str[] = "jenny";
    //return "Jenny"; // can modify a return string.
    return str;
}