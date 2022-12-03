//function with return value but no argument 
#include <stdio.h>
int sum(); // function declaration or prototype
void main()
{
    int addition;
    addition = sum();
    printf("Addition is %d ", addition); // function call
}
int sum() // function defination
{
    int a, b, c;
    printf("Enter first number..\n");
    scanf("%d", &a);
    printf("Enter second number ..\n");
    scanf("%d", &b);
    c = a + b;
    return c;
}
