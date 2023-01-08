#include<stdio.h>

int main(){
    int arr[10];
    int n;
    printf("enter the number,you want multiplication of : ");
    scanf("%d",&n);
    //storing the table of n in arr[10]
    for(int i=0;i<10;i++)
    {
        arr[i]=n*(i+1);
    }
    
    //printing the stored data
    for(int i=0;i<10;i++)
    {
      printf("%dx%d=%d\n",n,i+1,arr[i]);
    }

    return 0;
}