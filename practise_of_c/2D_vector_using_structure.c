#include<stdio.h>

typedef struct vector{
    int x;
    int y;
}vec;

vec sum(vec v1, vec v2)
{
    vec result;
    result.x=v1.x+v2.x;
    result.y=v1.y+v2.y;
    return result;
}

int main(){
    vec v1,v2,res;
    v1.x=20;
    v1.y=40;
    v2.x=30;
    v2.y=50;
    printf("the x component of vector v1 is %d and y component is %d\n",v1.x,v1.y);
    printf("the x component of vector v2 is %d and y component is %d\n",v2.x,v2.y);
    res=sum(v1,v2);
    printf("sum of x comp. vector v1 and v2 is %d\n",res.x);
    printf("sum of x comp. vector v1 and v2 is %d\n",res.y);


    return 0;
}