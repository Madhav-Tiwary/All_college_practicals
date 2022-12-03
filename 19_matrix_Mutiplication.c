#include <stdio.h>
int main()
{
    int mat1[3][3], mat2[3][3], mat3[3][3];
    printf("Enter First Matrix s elements :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Your First Matrix Elements :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", mat1[i][j]);
            printf(" ");
        }
        printf(" \n");
    }
    printf("Enter Second Matrix  Elements :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    printf("Your Second MatrixElements :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", mat2[i][j]);
            printf(" ");
        }
        printf(" \n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int sum = 0;
            for (int k = 0; k < 3; k++)
            {
                sum = sum + mat1[i][k] * mat2[k][j];
                mat3[i][j] = sum;
            }
        }
    }
    printf("Addition of Matrix---> :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", mat3[i][j]);
            printf(" ");
        }
        printf(" \n");
    }
    return 0;
}