#include<stdio.h>

int chocolate(int s_count,int *s,int d,int m){
    int count=0;
    
    int i=0;
    if(m==1){
        while(i<s_count){
            if(s[i]==d){
                count++;
            }
            i++;
        }
    
    return count;
    }
    else{
        if(m!=1){
            for(int i=0;i<s_count-(m-2);i++){
                for(int j=1;j<m;j++){

                    s[i]=s[i]+s[i+j];
                }
                if(s[i]==d){
                    count++;
                }
            }
        }

    }
    return count;
}
int main(){
    int n,d,m;
    printf("Enter number of chocolate bars:");
    scanf("%d",&n);

    int choco[n];
    printf("Enter integers on chocolate bars:");
    for(int i=0;i<n;i++){
    scanf("%d",&choco[i]);
    }

    printf("Enter birth day of Ron:");
    scanf("%d",&d);

    printf("Enter birth month of Ron:");
    scanf("%d",&m);

int bars=chocolate(n,choco,d,m);
printf("%d\n",bars);
    
    return 0;
}