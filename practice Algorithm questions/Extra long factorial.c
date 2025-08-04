#include<stdio.h>

long long int extraLongFactorials(long long int fact){
   
    if(fact==0 || fact==1){
        return 1;
    }
    fact=fact*extraLongFactorials(fact-1);
    return fact;
}
int main(){
    long long int n;
    long long int factorial;
    printf("Enter number to calulate factrial:");
    scanf("%lld",&n);

    factorial=extraLongFactorials(n);
    printf("%lld\n",factorial);
    return 0;
}