#include<stdio.h>
#include<stdlib.h>

void countApplesAndOranges(int s,int t,int a,int b,int apple_count,int *apples,int oranges_count,int *oranges){

int count_apple=0;
int count_oranges=0;

for(int i=0;i<apple_count;i++){
    int fruitapple=apples[i];

    int no_of_apples=a+fruitapple;
   
    if(no_of_apples>=s && no_of_apples<=t){
        count_apple++;
    }  
}
 printf("%d\n",count_apple);

for(int i=0;i<oranges_count;i++){
    int fruitorange=oranges[i];

    int no_of_oranges=b+fruitorange;

   if(no_of_oranges>=s && no_of_oranges <=t){
       count_oranges++;
    }
}
printf("%d\n",count_oranges);
}
int main(){
    int s,t,a,b,a_size,b_size;
    printf("Starting point of the sam's house:");
    scanf("%d",&s);

    printf("Ending point of the sam's house:");
    scanf("%d",&t);

    printf("Position of apple tree:");
    scanf("%d",&a);

    printf("Position of orange tree:");
    scanf("%d",&b);

    printf("Number of apples falls on land:");
    scanf("%d",&a_size);


printf("Apples distance falls on land:\n ");
    int *apples;
    apples=(int*)malloc(a_size*sizeof(int));
    for(int i=0;i<a_size;i++){
        scanf("%d",&apples[i]);
    }

    printf("Number of oranges falls on land:");
    scanf("%d",&b_size);


printf("oranges distance falls on land:\n ");
     int *oranges;
    oranges=(int*)malloc(b_size*sizeof(int));
    for(int i=0;i<b_size;i++){
        scanf("%d",&oranges[i]);
    }
countApplesAndOranges(s,t,a,b,a_size,apples,b_size,oranges);
return 0;

}