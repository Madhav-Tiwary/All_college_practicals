#include<stdio.h>
int main()
{
    int Height,Base,Area;
    printf("Enter Height :");
    scanf("%d",&Height);
    printf("Enter Base :");
    scanf("%d",&Base);
    Area=(Height*Base)/2;
    printf(" The area of Triangle = %d\n ",Area);
    return 0;
}