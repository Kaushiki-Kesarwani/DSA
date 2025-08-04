#include<stdio.h>
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    char ch;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
             ch='A';
        printf("%c ",ch=ch+i);
        }
        printf("\n");
    }
    return 0;
}