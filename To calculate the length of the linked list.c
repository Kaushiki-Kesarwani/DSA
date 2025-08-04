#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void get_length(struct Node* head){
   
    struct Node* temp=head;
     int count=0;
    while (temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    printf("length is : %d\n",count);
    
}
int main(){
    struct Node* head;
    struct Node* second;
     struct Node* third;
      struct Node* fourth;
       struct Node* fifth;

       head=(struct Node*)malloc(sizeof(struct Node));
       second=(struct Node*)malloc(sizeof(struct Node));
       third=(struct Node*)malloc(sizeof(struct Node));
       fourth=(struct Node*)malloc(sizeof(struct Node));
       fifth=(struct Node*)malloc(sizeof(struct Node));
       

       head->data=12;
       head->next=second;

       second->data=13;
       second->next=third;

       third->data=14;
       third->next=fourth;

       fourth->data=15;
       fourth->next=fifth;

       fifth->data=32;
       fifth->next=NULL;

       get_length(head);
       return 0;

}