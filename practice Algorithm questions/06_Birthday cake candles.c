#include<stdio.h>
int birthdaycakecandles(int candles_count,int *candles){
    int max_height=0,count_candles=0;

    for(int i=0;i<candles_count;i++){
        if(candles[i]>max_height){
            max_height=candles[i];
        }
    }
    for(int i=0;i<candles_count;i++){
        if(candles[i]==max_height){
            count_candles++;
        }
    }
    return count_candles;
}
int main(){
    int n;
    scanf("%d",&n);
    int cake[n];
    for(int i=0;i<n;i++){
        scanf("%d",&cake[i]);
    }
        int birth=birthdaycakecandles(n,cake);
        printf("The Number of tallest candles are: %d\n",birth);
        return 0;
    }
