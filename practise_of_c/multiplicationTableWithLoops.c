#include<stdio.h>

int main(){
    int n;
    int i=1;
    printf("enter the number whose multiplication table you want : ");
    scanf("%d",&n);

    printf("****** the multiplication table of %d is ****** \n",n);

    while(i<11){
        printf("%d*%d=%d\n",n,i,i*n);
        i++;
    }
    return 0;
}