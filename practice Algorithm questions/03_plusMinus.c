#include<stdio.h>

void plusMinus(int ar[],int ar_size){
    float pos_count=0,neg_count=0,zero_count=0;
    float pos_ratio,neg_ratio,zero_ratio;

    for(int i=0;i<ar_size;i++){
        if(ar[i]>0){
            pos_count++;
        }
        else if(ar[i]<0){
            neg_count++;
        }
        else{
            zero_count++;
        }
    }
    pos_ratio=pos_count/ar_size;
    neg_ratio=(neg_count/ar_size);
    zero_ratio=(zero_count/ar_size);

    printf("%.5f\n%.5f\n%.5f\n",pos_ratio,neg_ratio,zero_ratio);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    plusMinus(arr,n);
    return 0;
}