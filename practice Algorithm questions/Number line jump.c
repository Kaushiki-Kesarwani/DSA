#include<stdio.h>
#include<stdlib.h>
char* Kangaroo(int x1,int v1,int x2,int v2){
    char*s=(char*)malloc(4*sizeof(char));

    if(v1==v2){
    if(x1==x2){
        s=("YES");
        
    }else{
        s=("NO");
        
    }
    }else{
    if((x2-x1)%(v1-v2)==0 && (x2-x1)/(v1-v2)>0){
         s=("YES");
         }else{
             s=("NO");
         }
}
return s;
}
int main(){
    int x1,v1,x2,v2;
    printf("starting point of kangaroo 1:");
    scanf("%d",&x1);
    printf("jump distance of kangaroo 1:");
    scanf("%d",&v1);

     printf("starting point of kangaroo 2:");
    scanf("%d",&x2);
    printf("jump distance of kangaroo 2:");
    scanf("%d",&v2);

   char* jump = Kangaroo(x1,v1,x2,v2);
   printf("%s\n",jump);
   return 0;
}
    
