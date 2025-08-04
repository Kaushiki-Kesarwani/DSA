#include<stdio.h>
#include<stdlib.h>
int * reversearray(int a_count,int *a,int *result_count){
*result_count=a_count;
for(int i=0;i<(a_count/2);i++){
        int first=a[i];
        int second=a[a_count-i-1];
        //reversing array
        a[i]=second;
       a[a_count-i-1]=first;
        
    } 
   return a;
}
  
int main(){
    int N,count,*p;
    printf("Enter size:");
    scanf("%d",&N);                 

    int A[N];
    printf("Enter elements:");
    for(int i=0;i<N;i++){
    scanf("%d",&A[i]);
    }
    printf("Before reversing the array\n");
    for(int i=0;i<N;i++){
        printf("%d\t",A[i]);
    }
    printf("\n");

p=reversearray(N,A,&count);

printf("After reversing the array\n");
    for(int i=0;i<count;i++){
        printf("%d\t",p[i]);
    }


return 0;
}
