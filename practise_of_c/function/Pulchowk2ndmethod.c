#include<stdio.h>
#include<string.h>
// K
// wk
// owk
// howk
// chowk
// lchowk
// ulchowk
// pulchowk

void print(char name[10],int length,int loop){
    if(loop==0)
    {
        return;
    }
    else{
        print(name,length,--loop);
        printf("\n");
        for(int i=loop ; i ; i--)
        {
            printf("%c",name[i]);
        }
    }
}
int main()
{
    char name[10]="Pulchowk";
    print(name,strlen(name),strlen(name));
    return 0;
}