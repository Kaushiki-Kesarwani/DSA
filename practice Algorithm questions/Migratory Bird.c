#include <stdio.h>
#include <stdlib.h>
int migratoryBirds(int arr_count, int *arr)
{
    int max, id;
    max = 0;
    int *type = (int *)malloc(5 * sizeof(int));
    type[0] = 0;
    type[1] = 0;
    type[2] = 0;
    type[3] = 0;
    type[4] = 0;

    for (int i = 0; i < arr_count; i++)
    {
        if (arr[i] == 1)
        {
            type[0]++;
        }
        else if (arr[i] == 2)
        {
            type[1]++;
        }
        else if (arr[i] == 3)
        {
            type[2]++;
        }
        else if (arr[i] == 4)
        {
            type[3]++;
        }
        else if (arr[i] == 5)
        {
            type[4]++;
        }
    }
    for (int i = 0; i < 5; i++)
    {

        if (type[i] >= max)
        {
            max = type[i];
        }
    }
    for (int i = 0; i < 5; i++)
    {

        if (type[i] == max)
        {
            id = i + 1;
            break;
        }
    }

    return id;
}
int main()
{
    int n;
    printf("Enter size:");
    scanf("%d", &n);

    int arr[n];
    printf("Number of Bird sighted:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int birds = migratoryBirds(n, arr);

    printf("Highest frquency of bird = %d\n", birds);
    return 0;
}