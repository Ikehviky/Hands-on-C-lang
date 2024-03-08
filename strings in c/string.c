#include<stdio.h>

int main(){
    char name[30];

    printf("Enter Your Name: \n");

    // scanf("%s", name); // is faulty with buffer overflow

    // printf("%s\n", name);
    // puts(name);

    // gets is depreciated but instead use fgets
    fgets(name, sizeof(name), stdin);

    // puts(name);
    printf("%s \n", &name[2]);
}