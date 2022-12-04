// Write a programme to swap two number with the help of call by value

#include <stdio.h>
int swap(int, int);
int main()
{
    int a, b;
    printf("Enter First Number :\n");
    scanf("%d", &a);
    printf("Enter Second Number :\n");
    scanf("%d", &b);
    swap(a, b);
    printf("Numbers before swaping %d %d", a, b);
    return 0;
}
int swap(int a, int b)
{
    int c;
    c = b;
    b = a;
    a = c;
    printf("Numbers After swaping %d %d ", a, b);
}