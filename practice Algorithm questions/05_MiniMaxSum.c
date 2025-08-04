#include<stdio.h>
void miniMaxSum(int arr_count,int *arr){
long long int minisum=0,maxsum=0,totalSum=0;

for(int i=0;i<arr_count;i++){
    totalSum=totalSum+arr[i];
}
maxsum=totalSum-arr[0];
minisum=totalSum-arr[arr_count-1];

for(int i=0;i<arr_count;i++){
  long long int currentVal=totalSum-arr[i];

   if(currentVal<=minisum){
    minisum=currentVal;
   }

   if(currentVal>=maxsum){
    maxsum=currentVal;
   }
}
printf("%lld %lld\n",minisum,maxsum);
}
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    miniMaxSum(5,arr);
    return 0;
}