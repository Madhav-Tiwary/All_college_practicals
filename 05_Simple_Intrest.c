#include<stdio.h>
int main()
{
    int time, rate,principle, simpleintrest;
    printf("Enter principle\n");
    scanf("%d",&principle);   
    printf("Enter rate\n");
    scanf("%d",&rate);
    printf("Enter time\n");
    scanf("%d",&time);
    simpleintrest =(rate*principle*time)/100;
    printf("The simple intrest is %d",simpleintrest);
    return 0;
}