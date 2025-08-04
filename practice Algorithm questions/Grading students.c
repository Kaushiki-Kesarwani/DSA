#include<stdio.h>
#include<stdlib.h>
int *gradingstudents(int grades_count,int *grades,int *result_count){
    *result_count=grades_count;
    int *result=(int*)malloc(grades_count*sizeof(int));

    for(int i=0;i<grades_count;i++){
        int stu_grades=grades[i];

        if(stu_grades>=38){
            int nextmulti_of_5=((stu_grades/5)+1)*5;
            if(nextmulti_of_5-stu_grades<3){
                stu_grades=nextmulti_of_5;
            }
        }
        result[i]=stu_grades;
    }
    return result;
    }


int main(){
    int n;
    int result_count;
    printf("Number of students:");
    scanf("%d",&n);

    int *grades;
    //dynamically memory allocation
grades=(int*)malloc(n*sizeof(int));
for(int i=0;i<n;i++){
    scanf("%d",&grades[i]);
}
printf("Updated grades are:\n");
int *rounded_grades=gradingstudents(n,grades,&result_count);

for(int i=0;i<result_count;i++){
    printf("%d\n",rounded_grades[i]);
}
printf("\n");
  
    return 0;
}