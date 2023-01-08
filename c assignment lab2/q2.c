#include<stdio.h>

int main(){
    float sub[5];
    float total=0;
    int count=0;
    printf("***asssignment by Nirajan Malla***\n");
    for(int i=0;i<5;i++)
    {
        printf("enter the marks in subject%d : ",i+1);
        scanf("%f",&sub[i]);
    }
    for(int j=0;j<5;j++)
    {
        if(sub[j]<35)
        {
            printf("failed in subject%d\n",j+1);
            count++;
        }
    }
    for(int i=0;i<5;i++)
    {
        total+=sub[i];
    }
    total=total/5;
    if(count>0 || total<35)
    {
        printf("you failed the exam with percentage %.2f .Try hard next time",total);
    }
    else if(total>=35 && total<45)
    {
        printf("you secured 3rd division with percentage %.2f.",total);
    }
    else if(total>=45 && total<60)
    {
        printf("you secured 2nd division with percentage %.2f.",total);
    }
    else if(total>=60 && total<80)
    {
        printf("you secured 1st division with percentage %.2f.",total);
    }
    else
    {
        printf("congratulation you secured distinction with percentage %.2f.",total);
    }
    return 0;
}