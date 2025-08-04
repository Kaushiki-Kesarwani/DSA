#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);

    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    printf("HCF = %d\n", a);
    return 0;
}