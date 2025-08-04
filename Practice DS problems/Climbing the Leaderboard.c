#include<stdio.h>
#include<stdlib.h>

int *uniquerank(int ranked_count,int *ranked,int *unique_count){
    int *unique=(int*)malloc(ranked_count*sizeof(int));
    int j=0;
    for(int i=0;i<ranked_count;i++){
        if(i==0 || ranked[i]!=ranked[i-1]){
            unique[j++]=ranked[i];
           
        }
    }
    *unique_count=j;
    return unique;
}
int *climbingLeaderboard(int ranked_count,int *ranked,int player_count,int *player,int *result_count){
*result_count=player_count;
int uni_size;
int *unique_rank=uniquerank(ranked_count,ranked,&uni_size);
int *ranks=(int*)malloc(player_count*sizeof(int));
int pos=uni_size-1;

for(int i=0;i<player_count;i++){
    while(pos>=0 && player[i]>=unique_rank[pos]){
        pos--;
    }
    ranks[i]=pos+2;
}
return ranks;
}

int main(){
    int ranksize;
    int playersize;
    int result;
    int *climbing;
    
    printf("Enter size for ranks:");
    scanf("%d",&ranksize);

    printf("Enter ranks:");
    int *ranked;
    ranked=(int*)malloc(ranksize*sizeof(int));
    for(int i=0;i<ranksize;i++){
        scanf("%d",&ranked[i]);
    }
     printf("Enter size of players:");
    scanf("%d",&playersize);

    printf("Enter players rank:");
    int *players;
     players=(int*)malloc(playersize*sizeof(int));
    for(int i=0;i<playersize;i++){
        scanf("%d",&players[i]);
    }

climbing=climbingLeaderboard(ranksize,ranked,playersize,players,&result);

for(int i=0;i<result;i++){
    printf("Ranks are : %d\t",climbing[i]);
    printf("\n");
}
return 0;
}