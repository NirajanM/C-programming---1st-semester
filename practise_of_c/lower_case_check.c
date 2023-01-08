#include<stdio.h>
//  text    Ascii value
//    a        97
//    z        122

int main(){
   char input;
   printf("enter the character to check if it is lowercase or not:");
   scanf("%c",&input);
   if(input>=97 && input<=122)
   {
       printf("it is lowercase");
   }
   else
   {
        printf("it is not lowercase");
   }
   return 0;
}