#include <stdio.h>
#include <stdlib.h>

int nonDivisibleSubset(int k, int s_count, int* s) {
    int count_subset=0 , max_subset=0;
for(int i=0;i<s_count;i++){
    s[i]=s[i]%k;
}
for(int i=0;i<s_count;i++){
     count_subset=0;
    for(int j=0;j<s_count;j++){
        if(s[i]==i){
            count_subset++;
        s[i]=count_subset;
        }
       
    }
    
}

for(int i=0;i<s_count;i++){
    if(s[i]>max_subset){
        max_subset=s[i];
    }
}
return max_subset;
}

int main(){
    int n,k;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter value of k:");
    scanf("%d",&k);

    int*s=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
   int res=nonDivisibleSubset(k,n,s);
   printf("%d",res); 
}