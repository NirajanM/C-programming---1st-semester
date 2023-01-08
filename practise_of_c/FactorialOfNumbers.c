#include<stdio.h>

int main(){

    int n,factorial=1;
     printf("enter the number whose factorial you want : ");
    scanf("%d",&n);
    
    for(int i=1 ; i<=n ; i++){
                 factorial*=i;
    }
     printf("the factorial of %d is : %d ",n,factorial);
    return 0;
}