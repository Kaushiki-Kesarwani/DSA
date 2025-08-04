#include <stdio.h>
#include <stdlib.h>

int main() {
  int row,cols;
  printf("Enter number of rows:");
  scanf("%d",&row);
   printf("Enter number of cols:");
   scanf("%d",&cols);
    int **arr=(int**)malloc(row*sizeof(int *));// Step 1: Allocate memory
    for(int i=0;i<row;i++){
      arr[i]=(int *)malloc(cols*sizeof(int));
    }
      for(int i=0;i<row;i++){  // Step 2: Store a value in the allocated memory
        for(int j=0;j<cols;j++){
          printf("Enter value for arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
      }      
      for(int i=0;i<row;i++){  // Step 3: Access and print the value
        for(int j=0;j<cols;j++){
          printf("%d ", arr[i][j]);
        }
        printf("\n");
      }  
      for(int i=0;i<row;i++){
        free(arr[i]);
      }                                        
        free(arr);           // Step 4: Free the allocated memory

    return 0;
}
