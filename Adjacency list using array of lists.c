#include <stdio.h>
#include <stdlib.h>

struct Edge
{
    int des;           // destination
    struct Edge *next; // pointer to next edge
};

struct Edge *graph[100];

// create graph Edge
struct Edge *createEdge(int des)
{
    struct Edge *newEdge = (struct Edge *)malloc(sizeof(struct Edge));
    newEdge->des = des;
    newEdge->next = NULL;
    return newEdge;
}

// Adding edges
void addEdge(int src, int des)
{
    struct Edge *newEdge = createEdge(des);
    newEdge->next = graph[src];
    graph[src] = newEdge;
}

// initialize graph 1 to 99 ->NULL
void creategraph()
{
    for (int i = 0; i < 100; i++)
    {
        graph[i] = NULL;
    }

    addEdge(0, 2);
    addEdge(1, 2);
    addEdge(1, 3);
    addEdge(2, 0);
    addEdge(2, 3);
    addEdge(2, 1);
    addEdge(3, 1);
    addEdge(3, 2);
}

// print neibors
void printNeibor(int vertex)
{
    struct Edge *dummy = graph[vertex];
    printf("Edges of %d -> ", vertex);
    while (dummy != NULL)
    {
        printf("%d ", dummy->des);
        dummy = dummy->next;
    }
    printf("\n");
}

int main()
{
    int vertex;
    printf("Enter vertex:");
    scanf("%d", &vertex);

    creategraph();

    printNeibor(vertex);

    return 0;
}