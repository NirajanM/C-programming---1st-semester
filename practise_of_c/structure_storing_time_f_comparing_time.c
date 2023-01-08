#include<stdio.h>

typedef struct time{
    int hour;
    int min;
    int sec;
}time;

void display(time *data)
{
    for(int i=0;i<2;i++)
    {
        printf("time for data%d entered is: %d:%d:%d\n",i+1,data[i].hour,data[i].min,data[i].sec);
    }
}
int timecmp(time *d)
{
    int i=0;
        if(d[i].hour>d[i+1].hour)
        {
            return 1;
        }
        else if(d[i].hour<d[i+1].hour)
        {
            return -1;
        }
        else if(d[i].min>d[i+1].min)
        {
            return 1;
        }
        else if(d[i].min<d[i+1].min)
        {
            return -1;
        }
        else if(d[i].sec>d[i+1].sec)
        {
            return 1;
        }
        else if(d[i].sec<d[i+1].sec)
        {
            return -1;
        }
        else{return 0;}
}

int main(){
    time data[2];
    for(int i=0;i<2;i++)
    {
        printf("\n for data%d\nenter hour(24 hour format):",i+1);
        scanf("%d",&data[i].hour);
        printf("enter minute:");
        scanf("%d",&data[i].min);
        printf("enter second:");
        scanf("%d",&data[i].sec);
    }
    printf("\n\n");   
    display(data);
    int a=timecmp(data);
    if(a==1)
    {
        printf("time in data1 is greater");
    }
    else if(a==-1)
    {
        printf("time in data2 is greater");
    }
    else
    {
        printf("both data input are same");
    }
    return 0;
}