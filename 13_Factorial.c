// Write a program to find factorial of a given number
#include <stdio.h>
int main()
{
    int fact = 1, num, i;
    printf("Enter the Interger Number\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("factorial is %d is %d", num, fact);
    return 0;
}