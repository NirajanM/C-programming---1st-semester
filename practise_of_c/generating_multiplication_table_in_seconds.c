//this will generate Mtable of given integer in table.txt file within 1 click

#include<stdio.h>

int main(){
    int num;
    FILE *ptr;
    printf("enter the number you want multiplication of : ");
    scanf("%d",&num);
    ptr=fopen("table.txt","w");
    fprintf(ptr,"\t***multiplication table of %d***\n",num);
    for(int i=1;i<11;i++)
    {
        fprintf(ptr,"%dx%d=%d\n",num,i,num*i);
    }
    fclose(ptr);
    printf("\nmultiplication table of %d successfully generated in table.txt\nin current folder",num);
    return 0;
}