#include<stdio.h>
int SimpleArraysum(int arr[],int n){

    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];//sum+=arr[i]
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int Sum;
    Sum=SimpleArraysum(ar,n);
    printf("Sum = %d\n",Sum);

return 0;
}