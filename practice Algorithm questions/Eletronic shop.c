#include <stdio.h>
#include <stdlib.h>

int getMoneySpent(int Keyboards_count, int *Keyboards, int drives_count, int *drives, int b)
{
    int cost, max = -1;

    for (int i = 0; i < Keyboards_count; i++)
    {
        for (int j = 0; j < drives_count; j++)
        {
            cost = Keyboards[i] + drives[j];

            if (cost <= b && cost > max)
            {

                max = cost;
            }
        }
    }

    return max;
}

int main()
{
    int b, n, m, buy; // b -> budget,n -> Number of keyboads models,m -> Number of USB drives models

    printf("Enter budget:");
    scanf("%d", &b);

    printf("Enter prices of each keyboard models:");
    scanf("%d", &n);

    printf("Enter number of USB drive models:");
    scanf("%d", &m);

    int *keyboads;
    keyboads = (int *)malloc(n * sizeof(int));

    printf("Enter prices of each keyboards:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &keyboads[i]);
    }

    int *drives;
    drives = (int *)malloc(m * sizeof(int));

    printf("Enter prices of each USB drives:");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &drives[i]);
    }

    buy = getMoneySpent(n, keyboads, m, drives, b);

    printf("Maximum that can be spent : %d\n", buy);
    return 0;
}