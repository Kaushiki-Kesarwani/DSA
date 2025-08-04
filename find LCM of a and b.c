#include <stdio.h>
int main()
{
    int a, b, temp_a, temp_b, temp, LCM;
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);

    temp_a = a;
    temp_b = b;
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    LCM = (temp_a * temp_b / a);
    printf("LCM = %d\n", LCM);
    return 0;
}