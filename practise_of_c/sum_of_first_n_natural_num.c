#include<stdio.h>

int main(){
    int n,i=0,j=0;
    printf("enter the number upto which you want the sum : ");
    scanf("%d",&n);
    
    while(n>0){
      j=j+n-- ;
    }

     printf("the sum of %d natural number is %d ",n,j);
    return 0;
}
// or you can use ---> sum+=i;