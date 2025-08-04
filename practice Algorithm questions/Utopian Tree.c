#include<stdio.h>

int utopianTree(int n){
    int height=1;

    for(int i=1;i<=n;i++){
        if(i%2==1){ //odd cycle(spring)
            height*=2;
        }else{  //even cycle(summer)
            height+=1;
        }
    }
    return height;
}
int main(){
    int n,t; /*
            t is Number of test cases
            n is the number of cycles
             */ 
printf("Enter number of test cases:");
scanf("%d",&t);

printf("Enter number of cycle:");
for(int i=0;i<t;i++){
    scanf("%d",&n);

printf("Height = %d\n",utopianTree(n));
}
return 0;
}