#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int hourglassSum(int arr_rows, int arr_columns, int** arr) {
int sum,max;
max=INT_MIN;

for(int i=0;i<=arr_rows-3;i++){
 for(int j=0;j<=arr_rows-3;j++){
     sum=(arr[i][j])+(arr[i][j+1])+(arr[i][j+2])+(arr[i+1][j+1])+(arr[i+2][j])+(arr[i+2][j+1])+(arr[i+2][j+2]);
     
      if(sum>max ){
      max=sum;
  } 
    }
} 

return max;

}

int main(){
    int size,result;
    size=6;

    int **arr;
    arr=(int**)malloc(size*sizeof(int**));
    for(int i=0;i<size;i++){
        arr[i]=(int*)malloc(size*sizeof(int*));
    }

for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
        scanf("%d",&arr[i][j]);
    }
}
result=hourglassSum(size,size,arr);
printf("maximum sum of hoursglass : %d\n",result);

return 0;
}
