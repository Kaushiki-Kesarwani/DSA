#include<stdio.h>

#define N 5
int deque[N];
int front=-1;
int rear=-1;

void enquefront(int data){
        if((front==0 && rear==N-1)||(front==rear+1)){
            printf("Queue is full\n");
        }
        else if(front==-1 && rear==-1){
            front=rear=0;
            deque[front]=data;
        }
        else if(front==0){
            front=N-1;
            deque[front]=data;
        }
        else{
            front--;
            deque[front]=data;
        }
    }

    void enquerear(int data){
        if((front==0 && rear==N-1)||(front==rear+1)){
            printf("Queue is full\n");
        }
        else if(front==-1 && rear==-1){
         front=rear=0;
         deque[rear]=data;
    }
    else if(rear==N-1){
        rear=0;
        deque[rear]=data;
    }
    else{
        rear++;
        deque[rear]=data;
    }
    } 

    void dequefront(){
        if(front==-1 && rear==-1){
            printf("Underflow\n");
        }
        else if(front==rear){
            front=rear=-1;
        }
        else if (front==N-1)
        {
             printf("deleted data from front = %d\n",deque[front]);
             front=0;
        }
        
        else{
            printf("deleted data from front = %d\n",deque[front]);
            front++;
             
        }
    }

    void dequerear(){
      if(front==-1 && rear==-1){
            printf("Underflow\n");
        }
        else if(front==rear){
            front=rear=-1;
        }
        else if(rear==0){
            printf("deleted data from rear = %d\n",deque[rear]);
            rear=N-1;
        }
        else{
            printf("deleted data from rear = %d\n",deque[rear]);
            rear--;
        }   
    }

    void rearpeek(){
        if(front==-1 && rear==-1){
            printf("Queue is empty\n");
        }
        else{
            printf("Peek data of rear = %d\n",deque[rear]);
        }
    }

 void frontpeek(){
        if(front==-1 && rear==-1){
            printf("Queue is empty\n");
        }
        else{
            printf("Peek data of front = %d\n",deque[front]);
        }
    }

    void Display(){
 if(front==-1 && rear==-1){
            printf("Queue is empty\n");
            return ;
        }
        int i=front;
        while(i!=rear){
            printf("Elements : %d\n",deque[i]);
            i=(i+1)%N;
        }
        printf("Elements : %d\n",deque[rear]);
    }

int main(){
    int ch,data1,data2;
   do
   {
    printf("Enter choice of the user:");
    scanf("%d",&ch);

    switch(ch){
        case 1:printf("Enter data for front:");
        scanf("%d",&data1);
        enquefront(data1);
        break;

        case 2:printf("Enter data for rear:");
        scanf("%d",&data2);
        enquerear(data2);
        break;

        case 3:dequefront();
        break;

        case 4:dequerear();
        break;

        case 5:frontpeek();
        break;

        case 6:rearpeek();
        break;

        case 7:Display();
        break;

        default :printf("Invalid choice\n");
        break;
    }
   } while (ch!=0);
   
return 0;
    }
  

