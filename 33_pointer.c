// write a programme to perform basic operation on pointer
#include <stdio.h>
int main()
{
    int add;
    int x = 12;
    int y = 15;
    int *ptrx;
    ptrx = &x;
    int *ptry;
    ptry = &y;
    // printf("The address of x is %u\n", &x);
    // printf("The address of x is %d\n", x);
    // ptr=(&x)
    //* value at address operator
    add = *ptrx + *ptry;
    printf("The value of x is %u\n", add);
    // printf("The value of x is %d\n", *(&x));
    return 0;
}