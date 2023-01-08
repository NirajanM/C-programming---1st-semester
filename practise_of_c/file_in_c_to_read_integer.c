#include<stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("read.txt","r");
    int a,b,c;
    fscanf(ptr,"%d %d %d",&a,&b,&c);
    fclose(ptr);
    printf("we extracted 3 integers from file command\n");
    printf("which are:%d %d %d",a,b,c);
    return 0;
}