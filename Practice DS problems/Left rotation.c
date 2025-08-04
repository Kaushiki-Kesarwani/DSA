#include<stdio.h>
#include<stdlib.h>

int *rotateleft(int d,int arr_count,int *arr,int *result_count){
*result_count=arr_count;
int *ar;
ar=(int*)malloc(arr_count*sizeof(int));


    for(int i=0;i<arr_count;i++){
        ar[i]=arr[(i+d)%arr_count];
        }
    

return ar;
}
int main(){
    int n,d,result_count,*p;//n -> Number of integers
            //d -> Number of left rotations

            printf("Enter number of integers:");
            scanf("%d",&n);

            printf("Enter number of left rotations:");
            scanf("%d",&d);
    int *arr;
    arr=(int*)malloc(n*sizeof(int));

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }    
    p=rotateleft(d,n,arr,&result_count);

    for(int i=0;i<result_count;i++){
        printf("Rotated array : %d\t",p[i]);
        printf("\n");
    }
    return 0;
}