#include <stdio.h>
void staircase(int n)
{   for (int i = 0; i < n; i++)
    {

        for (int j = n-1; j > i; j--)
        {

            printf(" ");
        }

        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
       

int main()
{
    int n;
    scanf("%d", &n);

    staircase(n);
    return 0;
}