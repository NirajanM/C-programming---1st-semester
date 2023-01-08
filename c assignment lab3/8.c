// Display the following series up to 10thterms. : 1    8     27     64
//                                                1^3  2^3   3^3     4^3
#include<stdio.h>
#include<math.h>
void display(int a)
{
    for(int i=1;i<=a;i++)
    {
        printf("%d ",(int)pow(i,3));
    }
}

int main(){
    printf("***assignment by Nirajan Malla***\n");
    display(10);

    return 0;
}