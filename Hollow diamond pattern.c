#include<stdio.h>
int main(){
    int n=7;
    //top
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i-1;j++){
            printf("  ");
        }
    printf(" * ");
        if(i!=0){
            //spaces
            for(int j=0;j<2*i-1;j++){
                printf("  ");
            }
            printf(" * ");
        }
        printf("\n");
    }
    //botten
    for(int i=0;i<n-1;i++){//0ton-2
    //space
    for(int j=0;j<i+1;j++){
        printf("  ");
    }
    printf(" * ");
    if(i!=n-2){
        //space
        for(int j=0;j<2*(n-i)-5;j++){
            printf("  ");
        }
        printf(" * ");
    }
    printf("\n");
    }
    return 0;
}