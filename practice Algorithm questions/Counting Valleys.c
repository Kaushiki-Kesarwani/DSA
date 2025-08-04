#include<stdio.h>
#include<stdlib.h>
int countingValleys(int steps,char*path){
   
    int altitude=0;
    int countvalley=0;
  
 
    for (int i = 0; i < steps; i++) {
        if (path[i] == 'U') {
            altitude++;     // Step up increases altitude
            if (altitude == 0) {
                countvalley++;  // If we come back to sea level from below, count a valley
            }
        } else if (path[i] == 'D') {
            altitude--;     // Step down decreases altitude
        }
    }
 
    return countvalley;
}
int main(){
    int steps;
   
    printf("Enter steps walked by hiker:");
    scanf("%d",&steps);

    printf("Enter path:");

 char path[steps];
 
 for(int i=0;i<steps;i++){
     scanf(" %c",&path[i]);
 }

int count=countingValleys(steps,path);
printf("Valley walked by hiker:%d\n",count);

return 0;
}