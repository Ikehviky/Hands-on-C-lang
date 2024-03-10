#include <stdio.h>

void sum(int a, int b)
{
    printf("a + b = %d\n", a + b);
}

void sub(int a, int b)
{
    printf("a - b = %d\n", a - b);
}

void mult(int a, int b)
{
    printf("a x b = %d\n", a * b);
}

void divide(int a, int b)
{
    if( b != 0)
    {
        printf("a / b = %d\n", a / b);
    }else{
        printf("Division by zero is not possible.\n");
    }
}

int main()
{
    int a = 0, b = 0, ch;
    void ((*fptr[4])(int, int)) = {sum, sub, mult, divide};

    printf("Enter 0 to perform addition\n");
    printf("Enter 1 to perform subtraction\n");
    printf("Enter 2 to perform multiplication\n");
    printf("Enter 3 to perform division\n");

    scanf("%d", &ch);

    if(ch < 0 || ch > 3){
        printf("Invalid input...\n");
        return 1;
    }

    printf("Enter two operand a and b: \n");

    scanf("%d%d", &a, &b);

    (*fptr[ch])(a, b);

    return 0;
}