#include<stdio.h>
#include<string.h>

int main()
{
    char s1[30];
    int i;
    
    printf("Enter string; \n");

    fgets(s1, sizeof(s1), stdin);

    for(i < 0; s1[i] != '\0'; i++)
    {
        if(s1[i]>='A' && s1[i]<='Z')
        {
            s1[i] = s1[i]+32;
        }


    }

    printf("%s\n", s1);

}