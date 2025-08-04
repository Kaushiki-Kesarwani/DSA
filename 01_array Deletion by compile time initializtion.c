#include <stdio.h>
int main()
{
    int arr[100] = {6, 5, 7, 2, 1, 0, 9, 8};
    int size = 8;
    int index = 4;
    int Del_ele = 1;

    printf("Before deletion array looks. \n");
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d]=%d\n", i, arr[i]);
    }
    printf("\n");

    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;

    printf("After deletion array looks. \n");
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d]=%d\n", i, arr[i]);
    }
    printf("\n");
    printf("The deleted element is : %d\n", Del_ele);
    return 0;
}