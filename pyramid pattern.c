#include <stdio.h>
int main()
{
    int n;
    int num;

    printf("Enter n:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i - 1; j > 0; j--)
        {
            printf("  ");
        }
        num = 1;
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", num);
            num++;
        }
        for (int j = i + 1 - 1; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}