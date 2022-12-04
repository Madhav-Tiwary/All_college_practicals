// write a programme to store information of employees
#include <stdio.h>
#include <string.h>
struct employe
{
    char Name_of_Employe[15];
    int Id_of_Employe[10];
    int Date_of_Birth[10];
    char Father_Name[10];
    char Position_of_an_employe[15];
}; // e[n];
int main()
{
    int n;
    printf("Enter the Number of Employe\n");
    scanf("%d", &n);

    struct employe e[n];

    for (int i = 0; i < n; i++)
    {

        printf("Enter Name_of_Employe\n");
        scanf("%s", e[i].Name_of_Employe);

        printf("Enter Id_of_Employe\n");
        scanf("%d", &e[i].Id_of_Employe);

        printf("Enter Date_of_Birth\n");
        scanf("%d", &e[i].Date_of_Birth);

        printf("Enter  Father_Name \n");
        scanf("%s", e[i].Father_Name);

        printf(" Position_of_an_employe\n");
        scanf("%s", e[i].Position_of_an_employe);
    }

    printf("Printing the Employee  details ...\n");
    for (int i = 0; i < n; i++)
    {
        printf(" %s\n", e[i].Name_of_Employe);
        printf(" %d\n", e[i].Id_of_Employe);
        printf(" %d\n", e[i].Date_of_Birth);
        printf(" %s\n", e[i].Father_Name);
        printf(" %s\n", e[i].Position_of_an_employe);
    }
    return 0;
}