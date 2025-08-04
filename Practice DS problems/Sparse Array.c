#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int *matchingStrings(int stringList_count, char **stringList, int queries_count, char **queries, int *result_count)
{
    *result_count = queries_count;
    
    int *countchar = (int *)malloc(queries_count * sizeof(int));
    
    for (int i = 0; i < queries_count; i++)
    {countchar[i]=0;
        for (int j = 0; j < stringList_count; j++)
        {
            if (strcmp(queries[i], stringList[j]) == 0)
            {
                countchar[i]++;
            }
        }
    }
    return countchar;
}
int main()
{
    int n, q, result;
    printf("Enter size of string:\n");
    scanf("%d", &n);
    char **stringList;

    stringList = (char **)malloc(n * sizeof(char *));
    for (int i = 0; i < n; i++)
    {
        stringList[i] = (char *)malloc(n * sizeof(char));
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%s", stringList[i]);
    }

    printf("Enter size of queries:\n");
    scanf("%d", &q);
    char **queries;

    queries = (char **)malloc(q * sizeof(char *));
    for (int i = 0; i < q; i++)
    {
        queries[i] = (char *)malloc(n * sizeof(char));
    }

    for (int i = 0; i < q; i++)
    {
        scanf("%s", queries[i]);
    }
    int *p = matchingStrings(n, stringList, q, queries, &result);

    for (int i = 0; i < result; i++)
    {
        printf("%d\t", p[i]);
    }
    printf("\n");
    return 0;
}