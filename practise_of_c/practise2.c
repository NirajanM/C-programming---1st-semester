#include<stdio.h>

int main(){
    int mul[10],number;
    printf("whose multiplication table do you want? : ");
    scanf("%d",&number);
    for(int i=0 ; i<10 ; i++){
        mul[i]=(i+1)*number;
    }
    
    printf("***multiplicatiion table of %d***\n",number);

     for(int i=0 ; i<10 ; i++){
        printf("%dx%d=%d\n",number,i+1,mul[i]);
    }

    return 0;
}