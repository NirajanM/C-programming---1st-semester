#include<stdio.h>

int main(){
    float Msubject[3];
    int count=0;
    for(int i=0;i<3;i++)
    {
        printf("enter marks in subject %d: ",i+1);
        scanf("%f",&Msubject[i]);
    }
    for(int i=0;i<3;i++)
    {
       if(Msubject[i]>=33)
       {
           count++;
       }
       else{
           printf("failed in subject %d\n",i+1);
       }
    }
    float total=(Msubject[0]+Msubject[1]+Msubject[2])/3;
    if(count==3 && total>=40)
    {
        printf("you passed the examination.well done!");
    }
    else{  printf("you failed the examination.try hard next time!");}
    return 0;
}