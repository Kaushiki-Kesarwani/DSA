#include <stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);

    // outer loop
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < n; j++)
        {
            printf("%c ", ch);
            ch = ch + 1;
        }
        printf("\n");
    }
    return 0;
}