// WAP to input 5 integers and print it in ascending order . 
#include<stdio.h>

void TakeInput(int integers[5])
{
    for(int i=0;i<5;i++)
    {
        printf("enter integer%d: ",i+1);
        scanf("%d",&integers[i]);
    }
}
void  PrintInAscendingOrder(int integers[5]){
    printf("In Ascending Order:\n");
    // arranging in ascending order first
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(integers[i]>integers[j])
            {
                int temp=integers[i];
                integers[i]=integers[j];
                integers[j]=temp;
            }
        }
    }
    // printing the rearranged terms\arrray
    for(int i=0;i<5;i++)
    {
        printf("%d ",integers[i]);
    }
}
int main()
{
    int integers[5];
    TakeInput(integers);
    PrintInAscendingOrder(integers);
    return 0;
}