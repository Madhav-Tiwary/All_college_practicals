// C program to explain the use
// of continue statement
#include <stdio.h>

int main()
{

    for (int i = 1; i <= 10; i++)
    {

        if (i == 6)
            continue;

        else
            // otherwise print the value of i
            printf("value of i is %d\n ", i);
    }

    return 0;
}