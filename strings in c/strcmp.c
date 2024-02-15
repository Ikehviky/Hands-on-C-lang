#include<stdio.h>
#include<string.h>

int main()
{
    int value, flag = 0, i;
    char s1[30], s2[30];

    printf("Enter your first string: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Enter your second string: ");
    fgets(s2, sizeof(s2), stdin);

    // value = strcmp(s1, s2);

    // if(value == 0)
    // {
    //     printf("Strings are same\n");
    // }else{
    //     printf("Strings are not same\n");
    // }

    // ==== Manual Way ====

    for(i = 0; s1[i]!='\0' || s2[i]!='\0'; i++)
    {
        if(s1[i] != s2[i])
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        printf("Strings are same\n");
    }else{
        printf("Strings are not same\n");
    }
}