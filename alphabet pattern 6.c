#include<stdio.h>
int main(){
    int n;
    char ch;
     
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        //for spaces
        for(int j=0;j<i;j++){
            printf("  ");
        }
        for(int j=0;j<n-i;j++){
            ch='A';
            printf("%c ",ch+=i);
        }
        printf("\n");
        }
        return 0;
}