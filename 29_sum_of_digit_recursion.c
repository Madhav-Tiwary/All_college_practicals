// Write a programe to calculate sum of digits using recursion

#include <stdio.h>
int sumOfDigits(int num);

int main()
{
    int num, sum;

    printf("Enter any number to find sum of digits: ");
    scanf("%d", &num);

    sum = sumOfDigits(num);

    printf("Sum of digits of %d = %d", num, sum);

    return 0;
}

int sumOfDigits(int num)
{
    // Base condition
    if (num == 0)
        return 0;

    return ((num % 10) + sumOfDigits(num / 10));
}