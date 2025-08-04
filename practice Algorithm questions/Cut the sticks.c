#include<stdio.h>
#include<stdlib.h>

int minnum(int *arr,int arr_count){
    int min=1000;
int i=0;
while(i<arr_count){
    if(arr[i]<min && arr[i]>0){
        min=arr[i];
    }
    i++;
    
}
return min;
}

int *cutThesticks(int arr_count,int *arr,int *result_count){
    int num_of_cut=0;
    *result_count=0;
    int *newarr=(int*)malloc(arr_count*sizeof(int));
    int minval=minnum(arr,arr_count);
    for(int i=0;i<arr_count;i++){
        if(arr[i]>0){
            arr[i]=arr[i]-minval;
            num_of_cut++;

        }
        newarr[*result_count]=num_of_cut;
        (*result_count++);

    }
    return newarr;
}
int main(){
    int size=4;
    int cut,*s;
    
    int arr[size];
    printf("Enter the elements:");
    for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
    }
    s=cutThesticks(size,arr,&cut);
    for(int i=0;i<cut;i++){
        printf("%d\n",s[i]);
    }
return 0;
    }
    


