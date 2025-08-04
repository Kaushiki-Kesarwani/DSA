#include<stdio.h>
long aVeryBigSum(int ar_count,long *ar){
     long sum=0;
 for(int i=0;i<ar_count;i++){
    sum+=ar[i];//sum=sum+ar[i]
 }
 return sum;
}
int main(){
    int n;
    long Big_sum;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    long ar[n];
    for(int i=0;i<n;i++){
        scanf("%ld",&ar[i]);
    }
    Big_sum=aVeryBigSum(n,ar);
    printf("%ld",Big_sum);
    printf("\n");

    return 0;
}