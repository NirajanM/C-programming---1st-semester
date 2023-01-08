#include<stdio.h>

void sum(int x);

int main()
{
    int x;
    printf("enter your choice: ");
    scanf("%d",&x);
    sum(x);
    return 0;
}

void sum(int x){
    int r=0,s=0;   
   if(x/10 == 0)
   {
       return;
   } 

   else{          
       while (x > 0)
       {
           r=x%10;
           s=s+r;
           x=x/10;
       }   
        printf("sum:%d\n",s);
        sum(s);  
   }
  
}
