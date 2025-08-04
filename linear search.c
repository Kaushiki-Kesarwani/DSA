#include <stdio.h>
int linearsearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {2, 65, 67, 34, 21, 99, 234, 56, 78, 321, 62, 12, 8, 4, 48};
    int size = sizeof(arr) / sizeof(int);
    int element = 8;
    printf("The element %d is found at index %d\n", element, linearsearch(arr, size, element));

    return 0;
}