#include<stdio.h>
int pageCount(int n,int p){
    int min1,min2;

    int i=1;
    while(i<=p){
        if(i==1){
        min1=0;
        }
        else{
        if(i%2==0){
        if(i && i+1){
            min1++;
        }
}
        }
         i++;
}

      
    

 for(int i=n;i>=p;i--){
if(i==n){
    min2=0;
}
else{
    if(i%2!=0){
        if(i && i+1){
            min2++;
        }
    }
}

 }
 if(min1<=min2){
    return min1;
 }else{
    return min2;
 }
}

int main(){
    int n,p,count;
    printf("Number of Books:");
    scanf("%d",&n);
    printf("page number turn to:");
    scanf("%d",&p);

count=pageCount(n,p);
printf("minimum number of pages turn : %d\n",count);

return 0;
}
