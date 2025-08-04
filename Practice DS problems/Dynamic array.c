#include <stdio.h>
#include <stdlib.h>

int *dynamicArray(int n, int queries_rows, int queries_cols, int **queries, int *result_count)
{
    *result_count = 0;
    int *size, lastAnswer = 0, *result, idx;
    int **arr;
    result = (int *)malloc(queries_rows * sizeof(int));
    size = (int *)calloc(n, sizeof(int));
    arr = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
    {
        arr[i] = NULL;
    }
    for (int i = 0; i < queries_rows; i++)
    {

        idx = (queries[i][1] ^ lastAnswer) % n;

        if (queries[i][0] == 1)
        {
            size[idx]++;
            arr[idx] = realloc(arr[idx], size[idx] * sizeof(int));
            arr[idx][size[idx] - 1] = queries[i][2];
        }
        else if (queries[i][0] == 2)
        {
            lastAnswer = arr[idx][queries[i][2] % size[idx]];

            result[*result_count] = lastAnswer;
            (*result_count)++;
        }
    }

    return result;
}

int main()
{
    int n, rows, columns, result_count, *result;
    rows = 3;

    printf("Enter size of the array:");
    scanf("%d", &n);

    printf("Enter number of queries:");
    scanf("%d", &columns);

    int **queries;
    queries = (int **)malloc(columns * sizeof(int *));
    for (int i = 0; i < columns; i++)
    {
        queries[i] = (int *)malloc(rows * sizeof(int));
    }
    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            scanf("%d", &queries[i][j]);
        }
    }
    result = dynamicArray(n, rows, columns, queries, &result_count);
    for (int i = 0; i < result_count; i++)
    {
        printf("%d\n", result[i]);
    }
    // Free allocated memory
    for (int i = 0; i < columns; i++)
    {
        free(queries[i]);
    }
    free(queries);
    free(result);
    return 0;
}