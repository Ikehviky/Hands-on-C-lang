#include<stdio.h>
#include<stdlib.h>

//FIRST INSTANCE OF DANGLING POINTER

// int main()
// {
    // int *ptr = (int *) malloc(sizeof (int));
    // *ptr = 10;

    // printf("%d\n", *ptr);
    // free(ptr);
    // ptr = NULL; // the remedy for dangling pointer in this instance
    // printf("%d\n", *ptr);
// }

//SECOND INSTANCE OF DANGLING POINTER
// int f()
// {
//     static int a = 10;
//     return &a;
// }

// int main()
// {
//      int *ptr = f();
//     printf("%d\n", *ptr);
//     return 0;
// }

//THIRD INSTANCE OF DANGLING POINTER

void main()
{
    int *ptr = NULL;
    {
        int a = 5;
        ptr = &a;
        printf("a:%d\n", *ptr);
    }

    printf("%d\n", *ptr); // The outcome of this is not predictible and can produce the value of a while it can give other wise.
    
}