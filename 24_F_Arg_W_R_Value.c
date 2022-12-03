//function with return value with argument argument 
#include <stdio.h>
int sum(int ,int); // function declaration or prototype
void main()
{
    int a,b,addition;
    addition = sum(a,b);
    printf("Addition is %d ", addition); // function call
}
int sum(int a,int b) // function defination
{
    int  c;
    printf("Enter first number..\n");
    scanf("%d", &a);
    printf("Enter second number ..\n");
    scanf("%d", &b);
    c = a + b;
    return c;
}
