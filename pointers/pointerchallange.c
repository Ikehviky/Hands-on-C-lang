#include<stdio.h>

void main()
{
    int a[] = {10, 11, -1, 56, 67, 5, 4};
    int *p, *q;

    p = a;

    // printf("%d \n", *p);
    // printf("%p \n", p);

    // printf("a:%d\n", ++(*p));
    // printf("a:%p\n", p);
    printf("b:%d \n", a[0]);
    printf("b:%p \n", &a[0]);

    printf("b:%d \n",*++p);
    printf("b:%p \n", p);

    printf("b:%d \n",*p++);
    printf("b:%p \n", p);

    printf("b:%d \n",*p);
    printf("b:%p \n", p);

    printf("c:%d \n",(*p)++);
    printf("c:%p \n", p);

    printf("d:%d \n",*p);
    printf("d:%p \n", p);
    


    q = p + 3;
    printf("q: %d\n", *q);
    printf("q: %p\n", q);
    printf("q: %d\n", *q-3);

    printf("%d \n", *p);
    printf("%d \n", *--p+5);
    printf("%d\n", *p + *q);

    PRATICAL QUESTION

    int a[] = {10, 11, -1, 56, 67, 5, 4};
    int *p, *q;
    p = a;
    q = &a[0]+3;

    printf("%d %d %d", (*p)++, (*p)++, *(++p));
    printf("a:%d\n", ++(*p));
    

    printf("a:%d \n", *(++p));
    printf("b:%d \n", (*p)++);
    printf("c:%d \n", (*p)++);
    printf("d:%d \n", *p);
    printf("e:%d \n", (*p)++);

      printf("f:%d \n", (*p)++);

    printf("\n Q SECION \n");
    printf("%d\n", *q);
    printf("%p\n", q);
    printf("%d\n", *q--);
    printf("%d\n", *q);

    printf("\n");

    printf("q:%d\n", *q);
    printf("q:%d\n", (*(q+2))--);

    printf("\n");


    printf("c:%d \n",*(p+2)-2);
    printf("e:%d \n", *(p++ -2));
}