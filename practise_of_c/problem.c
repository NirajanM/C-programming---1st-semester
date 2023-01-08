#include<stdio.h>

int sum(int x,int y){
    return x+y;
}

float average(int x,int y){
    return (float)(x+y)/2;
}

int main(){
    int a=6,b=7;
    printf("the sum is %d and the average is %.2f",sum(a,b),average(a,b));
    
    return 0;
}