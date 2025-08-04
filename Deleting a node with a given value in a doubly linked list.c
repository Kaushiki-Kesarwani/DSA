#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node*prev;
    struct Node*next;
}node;

void display(node*p){
while(p!=NULL){
    printf("data = %d\n",p->data);
    p=p->next;
}
}
node*DeletingAnodeWithValue(node*head,int value){
    node*ptr1=head;
    node*ptr2=head->next;

    if(head==NULL){
        printf("List is empty.\n");
        return head;
        
    }
    if(head->data==value){
        if(head->next!=NULL){
            head->next->prev=NULL;
            head=head->next;
            free(ptr1);
          return head;
        }
    }
            if(head!=NULL){
        while(ptr2->data!=value && ptr2!=NULL){
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
            }
        if(ptr2->data==value && ptr2->next!=NULL){
            ptr1->next=ptr2->next;
            ptr2->next->prev=ptr1;
            free(ptr2);

        }
    
    
return head;
}
int main(){

    node*head;
    node*second;
    node*third;
    node*fourth;

    //memory allocation dynamically
    head=(node*)malloc(sizeof(node));
    second=(node*)malloc(sizeof(node));
    third=(node*)malloc(sizeof(node));
    fourth=(node*)malloc(sizeof(node));


    //create links
    head->data=4;
    head->next=second;
    head->prev=NULL;

    second->data=5;
    second->next=third;
    second->prev=head;

    third->data=7;
    third->next=fourth;
    third->prev=second;

    fourth->data=10;
    fourth->next=NULL;
    fourth->prev=third;

   printf("before insertion:\n");
display(head);
printf("\n");
printf("After insertion:\n");
head=DeletingAnodeWithValue(head,7);
display(head);


return 0;
}