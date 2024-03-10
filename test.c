#include<stdio.h>

int main()
{
    int arr[3] = {10, 20, 30};
    int *ptr = arr;
    *ptr++ *= ++*ptr;
    printf("%d, %d, %d", arr[0], arr[1], arr[2]);
    return 0;
}