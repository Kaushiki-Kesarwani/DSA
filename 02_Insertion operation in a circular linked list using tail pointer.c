#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};

void Display(struct node*tail){
    struct node*ptr=tail->next;
    if(tail==NULL){
        printf("List is Empty:");
    }
    else{
        do{
            printf("Element = %d\n",ptr->data);
            ptr=ptr->next;
        }while(ptr!=tail->next);

    }
    printf("data = %d\n",ptr->data);
}
//Insert at beginning
void insertatbeg(struct node** tail,int data){
    struct node*ptrnode=(struct node*)malloc(sizeof(struct node));
    ptrnode->data=data;
    ptrnode->next=NULL;

    if(*tail==0){
        *tail=ptrnode;
        (*tail)->next=ptrnode;
    }
    else{
        ptrnode->next=(*tail)->next;
        (*tail)->next=ptrnode;
    }
    
}

//Insert at End
void insertatend(struct node** tail,int data){
    struct node*ptrnode=(struct node*)malloc(sizeof(struct node));
    ptrnode->data=data;
    ptrnode->next=NULL;

  if(*tail==0){
        *tail=ptrnode;
        (*tail)->next=ptrnode;
    }
    else{
        ptrnode->next=(*tail)->next;
        (*tail)->next=ptrnode;
        *tail=ptrnode;
    }

}

//Count length
int getlength(struct node*tail){
    struct node*temp=tail->next;
    int length_count=0;

    do
    {
        length_count++;
        temp=temp->next;
    } while (temp!=tail->next);

    return length_count;
} 


//Insert at any position
void insertatanyposition(struct node**tail,int data,int position){
    struct node*ptrnode,*ptr;
    int len,i=1;

    len=getlength(*tail);
    if(position<1 ||position>len){
        printf("Invalid position.");
    }
    else if(position==1){
        insertatbeg(*(&tail),data);
    }
    else{
        ptrnode=(struct node*)malloc(sizeof(struct node));
        ptrnode->data=data;
        ptrnode->next=NULL;

        ptr=(*tail)->next;
        while(i<position-1){
            ptr=ptr->next;
            i++;
        }
    ptrnode->next=ptr->next;
    ptr->next=ptrnode;
    }
}



int main(){
    struct node *tail,*newnode;
    int data, create=1,pos;
    tail=0;
do{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
   scanf("%d",&newnode->data);
   newnode->next=NULL;

   if(tail==NULL){
    tail=newnode;
    tail->next=newnode;
   }
   else{
    newnode->next=tail->next;
    tail->next=newnode;
    tail=newnode;
   }
   

   printf("Do you want to continue creating nodes(1 for yes/0 for no:");
    scanf("%d",&create);
}while(create);

printf("Before insertion.\n");
Display(tail);
printf("\n");


printf("length = %d\n",getlength(tail));

//Insertion at beginning
printf("Enter data:");
scanf("%d",&data);

printf("\n");

//Insertion at beginning
printf("After insertion at beginning.\n");
insertatbeg(&tail,data);
Display(tail);

printf("\n");


//Insertion at end
printf("After insertion at end.\n");
insertatend(&tail,data);
Display(tail);


printf("\n");

printf("Enter position:");
scanf("%d",&pos);

//Insertion at any position
printf("After insertion at any position.\n");
insertatanyposition(&tail,data,pos);
Display(tail);


return 0;
}