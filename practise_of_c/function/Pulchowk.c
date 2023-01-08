#include<stdio.h>
// K
// wk
// owk
// howk
// chowk
// lchowk
// ulchowk
// pulchowk

void print(char name[10],int j,int len,int l){
    int i=j;
    if(len==0)
    {
        return;
    }
    else{
        print(name,++j,len-1,l);
       
        printf("\n");
        for(i;i<l;i++)
        {
            printf("%c",name[i]);
        }
        //
        //pulchowk
         
         
    }
}
int main()
{
    char name[10]="Pulchowk";
    print(name,0,8,8);
    return 0;
}