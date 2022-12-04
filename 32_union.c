// Write a programme to store information of employes with the help of Union
#include <stdio.h>
#include <string.h>
union employe
{
    char Name_of_Employe[15];
    int Id_of_Employe[10];
};
// e[n];
int main()
{
    int n;
    printf("Enter the Number of Employe\n");
    scanf("%d", &n);
    union employe e[n];
    for (int i = 0; i < n; i++)
    {

        printf("Enter Name_of_Employe\n");
        scanf("%s", e[i].Name_of_Employe);

        printf("Enter Id_of_Employe\n");
        scanf("%d", &e[i].Id_of_Employe);
    }

    printf("Printing the Employee  details ...\n");
    for (int i = 0; i < n; i++)
    {
        printf(" %s\n", e[i].Name_of_Employe);
        printf(" %d\n", e[i].Id_of_Employe);
    }
    return 0;
}
