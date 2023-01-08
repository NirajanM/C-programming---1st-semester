#include<stdio.h>

int main(){
    int num;
    printf("you want reverse multiplication table of : ");
    scanf("%d",&num);

    printf("\n*****Reverse multiplication table of %d*****\n\n\n",num);
    for(int i=10;i;i--)
    {
    printf("%dx%d=%d\n",num,i,num*(i));
    }

    return 0;
}