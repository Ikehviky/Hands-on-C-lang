#include<stdio.h>
#include<string.h>

int main()
{

    // ====== with string function ======

    char name[30];
    unsigned int count = 0;
    printf("Enter your choice words: \n");

    fgets(name, sizeof(name), stdin);

    count = strlen(name);    

    printf("The length of your choice words is %d \n", count);


    // ====== IN A MANUAL WAY ======

    // char quote[30];

    // int count = 0, i = 0;

    // printf("Enter your best quote: \n");

    // fgets(quote, sizeof(quote), stdin);
 
    // while(quote[i] != '\0')
    // {
    //     count++;
    //     i++;
    // }

    // puts(quote);
    // printf("Your quote is \t\n '%s \n while the length is %d \n", quote, count);


}