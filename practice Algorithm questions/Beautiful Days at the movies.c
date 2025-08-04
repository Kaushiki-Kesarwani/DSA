#include<stdio.h>
#include<stdlib.h>

int beautifulDays(int i,int j,int k){
    int num,last_digit,rev_digit,Beautiful_days,result=0;

    for(int s=i;s<=j;s++){
        num=s;
        rev_digit=0;
        //reverse the digit
        while(num!=0){
            last_digit=num%10;
            rev_digit=rev_digit*10+last_digit;
            num/=10;
        }
        Beautiful_days=abs(s-rev_digit);

        if(Beautiful_days%k==0){
            result++;
        }
    }
    return result;
}
int main(){
    int i, j, k;
    printf("Enter i:");
    scanf("%d",&i);
    printf("Enter j:");
    scanf("%d",&j);
    printf("Enter k:");
    scanf("%d",&k);

    printf("%d\n",beautifulDays(i,j,k));

return 0;
}