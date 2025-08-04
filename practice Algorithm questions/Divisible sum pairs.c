#include<stdio.h>
int divisibleSumPairs(int n, int k, int ar_count, int* ar) {
    int sum;
    ar_count=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            sum=ar[i]+ar[j];
            if(sum%k==0){
                ar_count++;
            }
             
        }
    }

return ar_count;
}
int main(){
int n,k;
int ar[n];
int count,pairs;
printf("Enter size:");
scanf("%d",&n);
printf("Enter k:");
scanf("%d",&k);

printf("\n");
printf("Enter elements:");
for(int i=0;i<n;i++){
scanf("%d",&ar[i]);
}

pairs = divisibleSumPairs(n,k,count,ar);
printf("%d valid pairs when k=%d\n",pairs,k);
return 0;
}