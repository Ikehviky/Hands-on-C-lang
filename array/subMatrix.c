#include<stdio.h>

int main()
{
    int a[2][3], b[2][3], c[2][3], i, j;

    printf("Enter The First Matrix: \n");

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d \n", &a[i][j]);
        }
    }

    printf("\n Enter The Second Matrix: \n");

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d \n", &b[i][j]);
        }
    }

    printf("\n Output Of The First Matrix: \n");

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d \t", a[i][j]);
        }
        printf("\n");
    }

    printf("\n Output Of The Second Matrix: \n");

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d \t", b[i][j]);
        }
        printf("\n");
    }

    printf("\n Output Of The Third Matrix which is the addition: \n");

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] - a[i][j];
            printf("%d\t", c[i][j]);
        }

        printf("\n");

    }
}