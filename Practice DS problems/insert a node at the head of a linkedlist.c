#include<stdio.h>
#include<stdlib.h>

   SinglyLinkedListNode {
      int data;
      SinglyLinkedListNode* next;
  };

  SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
//create new node with given data
SinglyLinkedListNode*newnode=create SinglyLinkedLinkNode(data);
//point newnode's next to current head of the list 
newnode->next=list;
return newnode;


    }
    int main() {
    SinglyLinkedListNode* llist = NULL; // Initialize the list as empty
    int n, data;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &data);
        llist = insertNodeAtHead(llist, data); // Insert each element at the head
    }

    printf("The linked list is: ");
    printList(llist);

    return 0;
}

    





