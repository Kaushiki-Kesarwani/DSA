#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
    
};
//Traversal of linked list
void traversal(struct Node*ptr){
    while(ptr!=NULL){
        printf("Data=%d\n",ptr->data);
        ptr=ptr->next;
    }
}
//Reversing linked list using recursion
struct Node* RecursiveReverse(struct Node* head){
struct Node* newhead;
    //Base case
    if(head==NULL || head->next==NULL){
        return head;
    }
     newhead=RecursiveReverse(head->next);

    head->next->next=head;
    head->next=NULL;
     
     return newhead;

}
int main(){

    struct Node*head;
    struct Node*second;
    struct Node*third;

//Allocating memory dynamically
    head=(struct Node*)malloc(sizeof(struct Node));
   second =(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));

//Link the nodes
    head->data=4;
    head->next=second;

    second->data=6;
    second->next=third;

    third->data=9;
    third->next=NULL;

printf("Before Reversing the list looks\n");
traversal(head);
printf("After Reversing the list looks\n");
head=RecursiveReverse(head);
traversal(head);


    return 0;
}