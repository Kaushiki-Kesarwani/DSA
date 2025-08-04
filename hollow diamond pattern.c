#include <stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    // Top
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i - 1; j > 0; j--)
        {
            printf("  ");
        }

        for (int j = i; j <= i; j++)
        { // with this loop and without this loop we can print the *(stars)

            printf(" *  ");
        }

        if (i != 0)
        {
            for (int j = 0; j < 2 * i - 1; j++)
            {
                printf("  ");
            }
            for (int j = i; j <= i; j++)
            { // with this loop and without this loop we can print the *(stars)
                printf("*  ");
            }
        }
        printf("\n");
    }
    // Bottom
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("  ");
        }
        for (int j = i; j <= i; j++)
        { // with this loop and without this loop we can print the *(stars)
            printf(" *  ");
        }

        if (i != n - 2)
        {
            for (int j = 0; j < 2 * (n - i) - 5; j++)
            {
                printf("  ");
            }

            for (int j = i; j <= i; j++)
            { // with this loop and without this loop we can print the *(stars)
                printf("*  ");
            }
        }
        printf("\n");
    }
    return 0;
}