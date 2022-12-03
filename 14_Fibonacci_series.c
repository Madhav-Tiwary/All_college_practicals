#include <stdio.h>
int main()
{
    int num1 = 0, num2 = 0, num3, i, num;
    printf("Enter number till you find febonacci series :");
    scanf("%d", &num);
    printf("%d %d ", num1, num2);
    for (i = 2; i <= num; i++)
    {
        num3 = num1 + num2;
        printf("%d", num3);
        num1 = num2;
        num2 = num3;
    }
    return 0;
}