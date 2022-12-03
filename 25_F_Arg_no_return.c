// function with no return value with argument
#include <stdio.h>
int sum(int, int); // function declaration or prototype
void main()
{
    int a, b;
    printf("Enter first number..\n");
    scanf("%d", &a);
    printf("Enter second number ..\n");
    scanf("%d", &b);

    sum(a, b); // function call
}
int sum(int a, int b) // function defination
{
    int c;

    c = a + b;
    printf("addition is %d", c);
}
