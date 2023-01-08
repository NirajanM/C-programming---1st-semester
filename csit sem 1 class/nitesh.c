#include <stdio.h>

float avgThree(float,float,float);

int main()
{
	float a,b,c;
	printf("Enter three numbers : ");
	scanf("%f %f %f",&a,&b,&c);
	printf("\n\nThe average of these numbers is %f",avgThree(a,b,c));
 return 0;
	}
	float avgThree(float a,float b,float c)
	{
	float avg=(a+b+c)/3;
		return avg;
		}
