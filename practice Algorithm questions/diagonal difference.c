#include<stdlib.h>
int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
 int diagonalDifference(int n,int matrix[n][n]){
     int primaryDiaganolsum=0;
     int secondaryDiagonal sum =0;
     for(int i=0;i<n;i++){
         primaryDiagnol sum+=matrix[i][i];
         seconaryDiagonal sum+=matrix[i][n-i-1];
     }
     return
     abs(primaryDiaganolsum-secondaryDiagonalsum);
 }
}
 int main(){
     int n;
     printf("enter the size of matrix:");
     scanf("%d",&n);
     int matrix[n][n];
     printf("enter the element of matrix :\n");
     for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
             scanf("%d",  &matrix[i][j]);
         }
     }
     //call function print the result
     int result=Diaganoldifference(n,matrix);
     printf("Diaganoldifference:%d",result);
 
 return 0;
 }