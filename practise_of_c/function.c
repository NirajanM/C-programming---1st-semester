#include<stdio.h>

void count(int *arr){
    int count=0;
    for(int i=0 ; i<14 ; i++){
        if(arr[i]%2==0){
       count++;}
       else{continue;}
    }
    printf("there are %d even integer ",count);
}

int main(){int n;
    int arr[]={1,2,3,4,5,6,7,8,9,23,43,34,3,2}; 
    count(arr);

    return 0;
}