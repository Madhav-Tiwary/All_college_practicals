// Function increment operation on a number

#include <stdio.h>
int inc(); // function declaration or prototype
void main()
{
    inc(); // function call
}
int inc() // function defination
{
    int a;
    printf("Enter any Number What you want ..\n");
    scanf("%d", &a);
    a--;
    printf("  Number After Decrement is %d", a);
}
