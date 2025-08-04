#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
    
};
void linkedlisttraversal(struct Node *ptr){
    while(ptr!=NULL){
        printf("Element:%d\n",ptr->data);
        ptr=ptr->next;
    }

}
int main(){
    //Declarationn

    struct Node *head;
    struct Node *second;
    struct Node *third;

    //Allocate memory
   
    head=(struct Node*)malloc(sizeof(struct Node));
     head=(struct Node*)malloc(sizeof(struct Node));
      head=(struct Node*)malloc(sizeof(struct Node));
    
    //Assign data to nodes

    head->data=2;
    head->next=second;

    second->data=4;
    second->next=third;

    third->data=6;
    third->next=NULL;

    linkedlisttraversal(head);
    
    return 0;

}