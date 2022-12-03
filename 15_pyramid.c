#include <stdio.h>
int main()
{
    int i, j, k,n=5;
    for (i = 1; i <=5; i++)
    {
        for (j = n; j >5; j--)
        {
            for (k = 1; k <= i; k++)
            {
                printf("* "); 
            }
        
        }
        printf("\n");
    }
    return 0;
}