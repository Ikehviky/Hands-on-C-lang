#include<stdio.h>

int avg(int[], int);

void main()
{
    int average;
    int marks[5] = {10, 15, 20, 30, 45};
    average = avg(marks, 5);
    printf("avg is %d\n", average);
}

int avg(int marks[], int a)
{
    int sum = 0, average = 0;
    for(int i = 0; i < a; i++)
    {
        sum = sum + marks[i];
    }

      average = sum/a;
      return average;
}