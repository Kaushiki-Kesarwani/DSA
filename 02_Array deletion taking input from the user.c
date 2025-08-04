#include <stdio.h>
int main()
{
    int arr[100];
    int size;
    int index;
    int Del_ele;

    printf("Enter size of the element:");
    scanf("%d", &size);
    printf("Enter index of the element:");
    scanf("%d", &index);
    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array Before Deletion.\n");
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d]=%d\n", i, arr[i]);
    }
    printf("\n");

    if (index <= 0 || index > size)
    {
        printf("Invalid index.");
    }
    else
    {
        Del_ele = arr[index];
        for (int i = index; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
    }
    printf("Array after Deletion.\n");
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d]=%d\n", i, arr[i]);
    }
    printf("\n");
    printf("Deleted element:%d\n", Del_ele);
    return 0;
}