#include<stdio.h> 

int GiveSum(int a[5]) 

{ 

int sum=0; 

for(int i=0;i<5;i++) 

{ 

sum+=a[i]; 

} 

return sum; 

} 

int main() 

{ 

int a[5]={1,2,3,4,5}; 

printf("sum of elements is %d",GiveSum(a)); 

} 