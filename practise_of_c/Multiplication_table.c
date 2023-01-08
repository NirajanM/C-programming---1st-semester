#include<stdio.h>

int main(){
    int num;
    printf("you want multiplication table of : ");
    scanf("%d",&num);
    printf("\n*****multiplication table of %d*****\n\n\n",num);
    for(int i=0;i<10;i++)
    {
    printf("%dx%d=%d\n",num,i+1,num*(i+1));
    }


    return 0;
}