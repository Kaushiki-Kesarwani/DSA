#include<stdio.h>
#include<stdlib.h>

char*angryProfessor(int k,int a_count,int *a){
    
    int ontime=0;

    for(int i=0;i<a_count;i++){
        if(a[i]<=0){
            ontime++;
        }
    }
    if(ontime>=k){
      return "YES";
    }else{
        return "NO";
    }

}
int main(){
    int N,K;
    printf("Total number of students:");
    scanf("%d",&N);

    printf("Enter minimum threshold:");//threshold -> minimum number of student who must arrive on time
    scanf("%d",&K);

    int *a=(int*)malloc(N*sizeof(int));
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    printf("%s\n",angryProfessor(K,N,a));

    return 0;
}