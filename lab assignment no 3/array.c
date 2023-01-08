#include<stdio.h> 

 

void PrintNthElement(int a[5],int n) 

{ 

printf("value at element no %d of given array is %d",n,a[n-1]); 

} 

int main() 

{ 

int a[5]={42,47,1,56,13}; 

int n; 

printf("for nth element that you wanna print,enter the value of n:"); 

scanf("%d",&n); 

PrintNthElement(a,n); 

return 0; 

} 