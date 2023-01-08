#include<stdio.h>

int main(){
    int n,sample=2;

    printf("enter the number to test if it's prime or not : ");
    scanf("%d",&n);

    for(int i=2;i<n;i++){
        if(n%i==0){
            printf("this is not a prime number \n");
            sample--;
            break;
        }
    }
    if(sample==2){
         printf("this is a prime number \n");
    }

    return 0;
}