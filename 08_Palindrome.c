// write a program to check given number is palindrome or not
#include <stdio.h>
int main()
{
    int sum = 0, num, remainder, temp;
    printf("Enter any integer number :\n");
    scanf("%d", &num);
    temp = num;
    while (num > 0)
    {
        remainder = num % 10;         // gives remainder
        sum = (sum * 10) + remainder; // add remainder 
        num = num / 10;               // givs quotient
    }
    if (temp == sum)
        printf(" Palindrome Number");

    else
    {
        printf("Not a palindrome Number");
    }
    return 0;
}