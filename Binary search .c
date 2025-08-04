#include<stdio.h>
int binarysearch(int arr[],int size,int element){
    int start,mid,end;
    start=0;
    end=size-1;
    while (start<=end)
    {
        mid=(start+end)/2;
        if(arr[mid]==element){
            return mid;
        }
        else if(arr[mid]<element){
             start=mid+1;
        }
        else{
             end=mid-1;
        }
    }
    return -1;
    
}
int main(){
    int arr[]={10,20,29,30,34,35,45,50,55,67,70,79,90,99};
    int size=sizeof(arr)/sizeof(int);
    int element=99;
    int binary=binarysearch(arr,size,element);
    printf("The Element %d is present at index %d\n",element,binary);
    return 0;
}