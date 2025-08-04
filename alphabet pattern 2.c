#include<stdio.h>
int main(){
    int n;
    char ch='a';
    printf("Enter n:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%c ",ch);
            ch=ch+1;
        }
        printf("\n");
    }

    return 0;
}