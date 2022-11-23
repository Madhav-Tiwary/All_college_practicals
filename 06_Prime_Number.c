#include <stdio.h>
int main()
{
    int n, i, count = 0;
    printf("Enter the number :");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {

            count++;
        }
    }
    if (count == 2)
    {
        printf("Number is Prime");
    }
    else
    {
        printf("Number is Not Prime");
    }
    return 0;
}
// To Check weather number is prime or not

#include <stdio.h>
int main()
{
    int i, flag = 0, n;
    printf("Enter the Number :");
    scanf("%d", &n);
    if (n == 1 || n == 0)
    {
        flag = 1;
    }
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("Number is Prime :");
    }
    else
    {
        printf("Number is not Prime:");
    }

    return 0;
}