#include <stdio.h>

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}

void Array_Deletion(int size, int index, int arr[])
{
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}
void print_Del_Element(int Del_ele)
{
    printf("Deleted Element is:%d", Del_ele);
}

int main()
{
    int a[100] = {11, 25, 6, 3, 2, 1};

    int size = 6;
    int index = 1;
    int Del_ele = 25;

    printf("Array before Deletion.\n");

    printArray(a, size);
    Array_Deletion(size, index, a);

    size--;

    printf("\n");
    printf("Array after Deletion.\n");

    printArray(a, size);
    printf("\n");
    print_Del_Element(Del_ele);
    printf("\n");

    return 0;
}