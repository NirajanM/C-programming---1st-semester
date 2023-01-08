#include<stdio.h>

int main(){
    int a;
    int mul[10];
    printf("enter the number to find multiple table of \n");
    scanf("%d",&a);

    printf("the multiplication table of %d is ---\n",a);
    for(int i=0 ;i<11;i++){
        mul[i]=a*i;
    }
    for(int i=0 ;i<11;i++){
        printf("%d x %d=%d \n",a/10,i,mul[i]);
    }
    return 0;
}