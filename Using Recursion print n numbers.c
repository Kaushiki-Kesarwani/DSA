#include<stdio.h>

int printnums(int n){

    if(n==1){
        printf("%d\n",n);
        return;
    }
printf("%d\t",n);
printnums(n-1);
}
int main(){
printnums(10);
return 0;
}