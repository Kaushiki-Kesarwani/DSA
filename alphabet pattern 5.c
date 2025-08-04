#include<stdio.h>
int main(){
    int n;
    char ch;
     
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=i+1-1;j>=0;j--){
            ch='A';
            printf("%c ",ch+=j);
        }
        printf("\n");
    }

    return 0;
}