#include<stdio.h>
void slice(char *abc,char *def,int c,int d)//changing name of variable in function don"t cause any error
//for no confusion don't change variable names
{
    int i=0,j=0;
    while(i<=d)//runs upto which user wants(d here is b from main())
    {
      if(i>=c)//runs from which user wants(c here is a from main())
      {
          def[j]=abc[i];//changing values of def array changes value of strn array in main()
                        //because address is passed , str(in main)-->abc here
          j++;//j is here because array has to start from 0 like- arr[0],arr[1].....
      }
      i++;//this is outside if else condition because this needs to run anyhow to continue while loop
    }
    def[j]='\0';//last character in any string should be '\0'

}

int main(){
    //creating arrays and integers
    char str[15];
    char strn[15];
    int a,b;
    //taking input from user
    printf("input your name:");
    gets(str);
    printf("enter position from which you wanna slice(in number):");
    scanf("%d",&a);
    a--;//this is because array start from 0 and we count number in real life from 1
    printf("enter position upto which you wanna slice(in number):");
    scanf("%d",&b);
    b--;
    slice(str,strn,a,b);//str passes address of str[0] i.e str=&str[0]
    printf("sliced string is %s",strn);//changing value of address passed variable change its value in main()
    return 0;
}