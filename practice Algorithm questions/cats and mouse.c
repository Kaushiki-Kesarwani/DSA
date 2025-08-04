#include<stdio.h>
#include<stdlib.h>

char* catAndMouse(int x,int y,int z){
    char*str1=(char*)malloc(sizeof(char));
        char*str2=(char*)malloc(sizeof(char));
            char*str3=(char*)malloc(sizeof(char));
    str1="catA";
    str2="catB";
    str3="MouseC";

int countA=0,countB=0;

    if(x<z){
        for(int i=x;i<z;i++){
            countA++;
        }
    }else if(x>z){
        for(int i=x;i>z;i--){
            countA++;

        }
    }
    if(y<z){
     for(int i=y;i<z;i++){
            countB++;
        }   
    }else if(y>z){
        for(int i=y;i>z;i--){
            countB++;

        }
    }
    if(countA<countB){
        return str1;
}
else if(countB<countA){
    return str2;

}
else if(countA==countB){
    return str3;
}

}
int main(){
    int q,x,y,z;
    char *catch;
    printf("Number of queries:");
    scanf("%d",&q);

printf("Enter positions of cats and mouse:");
    for(int i=0;i<q;i++){
        scanf("%d",&x);
        scanf("%d",&y);
        scanf("%d",&z);
    
catch=catAndMouse(x,y,z);
printf("%s\n",catch);
    }

return 0;
}