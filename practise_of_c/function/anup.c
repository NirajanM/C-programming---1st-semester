/*
e
ex
exa
exam
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void print(char arr[5],int len,int i);
int main()
{
    char arr[5]="exam";
    print(arr,strlen(arr),0);
    return 0;
}
void print(char arr[5],int len,int i){
    i=0;
    if (len==0)
    {
        return;
    }
    else{
        print(arr,len-1,i);
        printf("\n");
       while (i<len)
       {
           printf(" %c",arr[i]);
           i++;
       }
       
        
    }
}