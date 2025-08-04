#include<stdio.h>
#include<stdlib.h>
int* circularArrayRotation(int a_count, int* a, int k, int queries_count, int* queries, int* result_count) {
int lastval=a[a_count-1],s=a_count-1;
*result_count=queries_count;

for(int i=0;i<k;i++){
    for(int j=a_count-2;j>=0;j--){
        a[s--]=a[j];
    }
    a[s]=lastval;
}

return a;
}


int main(){
    int n,k,q,result;
    printf("Enter the number of element:");
    scanf("%d",&n);
    printf("Enter number of rotations:");
    scanf("%d",&k);
    printf("Enter number of queries:");
    scanf("%d",&q);

printf("Enter Integer elements:");
int *ar=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }

    printf("Enter number of queries:");
    int *queries=(int *)malloc(q*sizeof(int));
    for(int i=0;i<q;i++){
        scanf("%d",&queries[i]);
    }
    circularArrayRotation(n,ar,k,q,queries,&result);

    for(int i=0;i<=result;i++){
    printf("a[%d]=%d\n",i,ar[i]);
}
    return 0;
}