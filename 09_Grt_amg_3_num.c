// Write a program to find greatest among three numbers
#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter First Number :");
    scanf("%d", &num1);
    printf("Enter Second Number :");
    scanf("%d", &num2);
    printf("Enter Third Number :");
    scanf("%d", &num3);
    if (num1 > num2 && num1 > num3)
    {
        printf(" %d is greater than %d %d  \n", num1, num2, num3);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf(" %d is greater than %d %d \n", num2, num1, num3);
    }
    else if (num3 > num1 && num3 > num2)
    {
        printf(" %d is greater than %d %d \n", num3, num1, num2);
    }
    else
    {
        printf("Any of two numbers are equal or All area equal");
    }
    return 0;
}