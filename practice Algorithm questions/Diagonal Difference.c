#include<stdio.h>
#include<stdlib.h>
int diagonalDifference(int arr_rows,int arr_columns,int **arr){
    int diagonal1_sum=0,diagonal2_sum=0,diagonal_difference;
    for(int i=0;i<arr_rows;i++){
         diagonal1_sum=diagonal1_sum+arr[i][i];
        }

    for(int i=0;i<arr_rows;i++){
        diagonal2_sum=diagonal2_sum+arr[i][arr_rows-i-1];
    }
    diagonal_difference=abs(diagonal1_sum-diagonal2_sum);
    return diagonal_difference;
}
int main(){
    int n,diagonal;
    printf("Enter the size of 2D array:\n");
    scanf("%d",&n);
    int **ar=(int**)malloc(n*sizeof(int*));
    for(int i=0;i<n;i++){
       ar[i]=(int*)malloc(n*sizeof(int));
    }
    printf("Enter the elements in 2D array:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        scanf("%d",&ar[i][j]);
        }
    }
    diagonal=diagonalDifference(n,n,ar);
    printf("Diagonal differce is : %d\n",diagonal);
    
return 0; 
}