// write a programme to find factorial using recursion
#include <stdio.h>
int fact(int);
int main()
{
    int x, number;

    printf("Enter a number: ");
    scanf("%d", &number);

    x = fact(number);
    printf("Factorial of %d is %ld\n", number, x);
    return 0;
}

int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return (n * fact(n - 1));
}
