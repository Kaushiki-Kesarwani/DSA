#include<stdio.h>
#include<stdlib.h>
int * compare_triplets(int a_count,int *a,int b_count,int *b,int *result_count){
    *result_count=2;
    int *result=(int *)malloc(2*sizeof(int));
    result[1]=0;
    result[2]=0;

    for(int i=0;i<a_count;i++){
        if(a[i]>b[i]){
            result[1]++;
        }else if(b[i]>a[i]){
            result[2]++;
        }
    }
    return result;
}
      
int main(){
    int a[3], b[3];

    int result;
    printf("Enter the vote for Alice:\n");
    for(int i=0;i<3;i++){
        scanf("%d",&a[i]);
    }
    printf("\n");
    
     printf("Enter the vote for Bob:\n");
    for(int i=0;i<3;i++){
        scanf("%d",&b[i]);
    }
   int *compare=compare_triplets(3,a,3,b,&result);
    printf("Alice,Bob\n");
    printf("Size of result array: %d\n", result);  
    
    
        printf("%d %d\n",compare[1],compare[2]);
    
    
    
    printf("\n");

    return 0;
}