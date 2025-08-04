//Circular linked list creation and display
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};
// display the list
void display(struct node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct node* ptr = head;
    do {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head); // Loop until you come back to the head node
    printf("To check list is correctly circular the last node is head \n");
    printf("data = %d\n",ptr->data);
}

struct node * Insertionatspecificpos(struct node*head,int data,int pos){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    struct node*ptr=head;
    int i=1;
    while(i!=pos-1){
        ptr=ptr->next;
        i++;
    }
    newnode->data=data;
    newnode->next=ptr->next;
    ptr->next=newnode;

return head;
}


int main(){
    struct node*head,*newnode,*ptr;
    int data,create;
    head=0;

    do{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;


    if(head==NULL){
        head=newnode;
        ptr=head;
        
     }
     else{
        
        ptr->next=newnode;
        ptr=newnode;
     }
     ptr->next=head;

    printf("do u want to continue(1for yes/0 for No):");
     scanf("%d",&create);
}while(create);

printf("Before isertion\n");
display(head);

printf("\n");
int newdata,pos;
printf("Enter data:");
scanf("%d",&newdata);

printf("\n");
printf("Enter position for inserting node:");
scanf("%d",&pos);
printf("After isertion\n");
head=Insertionatspecificpos(head,newdata,pos);
display(head);

 return 0;
}

