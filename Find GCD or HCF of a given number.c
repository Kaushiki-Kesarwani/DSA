#include <stdio.h>
int main()
{
    int a, b, GCD = 1, min;

    printf("Enter value of a:");
    scanf("%d", &a);

    printf("Enter value of b:");
    scanf("%d", &b);

    if (a <= b)
    {
        min = a;
    }
    else
    {
        min = b;
    }

    for (int i = 1; i <= min; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            GCD = i;
        }
    }
    printf("GCD is : %d\n", GCD);
    return 0;
}