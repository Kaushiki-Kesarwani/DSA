#include<stdio.h>
#include<stdlib.h>
 struct Node
{
    int data;
    struct Node*prev;
    struct Node*next; 
};

void display(struct Node*ptr){
    
    while(ptr!=NULL){
        printf("Data=%d\n",ptr->data);
        ptr=ptr->next;
        
    }
}
void insertioninbetween(struct Node**head,int pos,int data){
    struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
    struct Node*ptr=*head;
if(pos<1 || ptr==NULL){
printf("Invaid position\n");
}
else if(pos==1){
    newnode->data=data;
    newnode->next=*head;
    newnode->prev=NULL;
    (*head)->prev=newnode;
    *head=newnode;
}
else{
    int i=1;
    while(i<pos-1){
        ptr=ptr->next;
        i++;
    }
    newnode->prev=ptr;
    newnode->next=ptr->next;
    ptr->next=newnode;
    newnode->next->prev=newnode;
}
}
int main(){
    struct Node*head,*newnode,*temp;
    int choice;
    head=NULL;
   

do{
    newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter data:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->prev=NULL;

    if(head==NULL){
        head=newnode;
        temp=head;

    }
    else{
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
    }
//ask the user if want to continue adding nodes
printf("Do you want to add another node(1 for Yes/0 for No):");
scanf("%d",&choice);
}while(choice);


display(head);
printf("\n");
int value;
printf("Enter data for insertion:");
scanf("%d",&value);
head=insertion(head,value);
display(head);

return 0;

}
