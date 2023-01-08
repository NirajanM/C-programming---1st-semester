#include<stdio.h>

void reverse(int *arr,int n){
    for(int i=0 ; i<(n/2) ; i++){
        int temp;
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
}
int main(){
    int n,arr[n];
    printf("please enter ,how many entry of data do you want in number : ");
    scanf("%d",&n);
    
    for(int i=0 ; i<n ; i++){
        printf("enter data %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    reverse(arr,n);

     
    for(int i=0 ; i<n ; i++){
        printf("%d\n",arr[i]);
    }

    return 0;
}