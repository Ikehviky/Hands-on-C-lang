#include<stdio.h>
#include<string.h>

int main()
{
    // Using the c built in functions
    char s1[30] = "Ikeh ";
    char s2[] = "Victor";

    // strcat(s1, s2);
    // printf("%s\n", s1);

    // Using Logic 

    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int i;


    for(i=0; i<len2; i++){
        // printf("%d", i);
        s1[len1 + i] = s2[i];
    }

    printf("%s\n", s1);
}