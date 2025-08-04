#include<stdio.h>
#include<stdlib.h>

int *breakingRecords(int scores_count,int *scores,int *result_count){
    int highest,lowest;

    highest=scores[0];
    lowest=scores[0];

    *result_count=2;
    int *result=(int*)malloc(2*sizeof(int));
    result[0]=0;
    result[1]=0;

    for(int i=0;i<scores_count;i++){
        
        if(scores[i]>highest){
            highest=scores[i];
        result[0]++;
        }

        if(scores[i]<lowest){
            lowest=scores[i];
        result[1]++;
        }
    }
    return result;

}
int main(){
    int n;//Number of Games
    int result;
    printf("Enter Number of games:");
    scanf("%d",&n);
    int Games[n];
    printf("Enter Number of scores:");
    for(int i=0;i<n;i++){
    scanf("%d",&Games[i]);
    }
    int *Season=breakingRecords(n,Games,&result);
    printf("[%d %d]\n",Season[0],Season[1]);

    return 0;

}