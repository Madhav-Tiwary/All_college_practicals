// write a program to add digits of given numbers
#include <stdio.h>
int main()
{
    int sum = 0, num, remainder;
    printf("Enter any integer number :");
    scanf("%d", &num);
    while (num > 0)
    {
        remainder = num % 10;  // gives remainder
        sum = sum + remainder; // add remainder in with sum variable
        num = num / 10;        // givs quotient
    }
    printf("The Addition of this Number is %d", sum);
    return 0;
}