#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int *cutThesticks(int arr_count,int *arr,int*result_count){
int new_arr=0,min=INT_MAX;
*result_count=0;
int *counts=(int*)malloc(arr_count*sizeof(int));


while(arr_count!=0){
    new_arr = 0;
        min = INT_MAX;

    counts[*result_count]=arr_count;
    (*result_count)++; 
for(int i=0;i<arr_count;i++){
    if(arr[i]<min){
        min=arr[i];
    }
}
for(int i=0;i<arr_count;i++){
    if(arr[i]>0){
        arr[i]-=min;
       if(arr[i]>0){
        arr[new_arr++]=arr[i];
       }
    }
}

arr_count=new_arr;

}
return counts;
}

int main(){
    int size;
    int result,*res;

    printf("Enter size:");
    scanf("%d",&size);
int *arr=(int*)malloc(size*sizeof(int));
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}
res=cutThesticks(size,arr,&result);
printf("left sticks before cutting :");
for(int i=0;i<result;i++){
    printf(" %d\n ",res[i]);
}
return 0;
}