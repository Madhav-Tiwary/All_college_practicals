// Write a programme to swap two number with the help of call by reference

#include <stdio.h>
int swap(int *a,int *b);
int main()
{
    int a, b;
    printf("Enter two values :\n");
    scanf("%d %d", &a, &b);
    swap(&a,&b);
    printf("value of a & b before swapping %d %d\n",a,b);
}
int swap(int *a,int *b)

{
    int c;
    c = *a;
    *a = *b;
    *b = c;
    printf("value of a & b after swapping %d %d\n", *a, *b);
}