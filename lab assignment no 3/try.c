#include<stdio.h> 

 

int countFactor(int n) 

{ 

int count=0; 

for(int i=1;i<=n;i++) 

{ 

if(n%i==0) 

{ 

count++; 

} 

} 

return count; 

} 

 

int isPrime(int c) 

{ 

if(c==2) 

{ 

return 1; 

} 

else 

{ 

return 0; 

} 

} 

 

 

int main() 

{ 

int n,c; 

printf("enter upto which prime number you want to see:"); 

scanf("%d",&n); 

 

for(int i=1;i<=n;i++) 

{ 

c=countFactor(i); 

if(isPrime(c)) 

{ 

printf("%d ",i); 

} 

} 

return 0; 

} 