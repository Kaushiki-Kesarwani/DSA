#include <stdio.h>
#include <stdlib.h>

typedef struct SinglyLinkedListNode
{
    int data;
    struct SinglyLinkedListNode *next;

} SinglyLinkedListNode;

void printlinkedlist(SinglyLinkedListNode *head)
{
    SinglyLinkedListNode *ptr = head;
    while (ptr != NULL)
    {
        if (head == NULL)
        {
            printf("List is empty.\n");
        }
        else
        {
            printf("%d\n", ptr->data);
            ptr = ptr->next;
        }
    }
}

int main()
{
    int n, num, ptr;
    SinglyLinkedListNode *newnode, *head=0, *current;
    printf("Enter number of elements in the linked list:");
    scanf("%d", &n);

  
    for(int i=0;i<n;i++){
        scanf("%d", &ptr);
        
     
        newnode = (SinglyLinkedListNode *)malloc(sizeof(SinglyLinkedListNode));
        newnode->next = NULL;
        newnode->data = ptr;
    
        if (head == NULL)
        {
            current = head = newnode;
        }
        else
        {
            current->next = newnode;
            current = newnode;
        
        } 
    }    
printf("\n");
    printlinkedlist(head);

    return 0;
}