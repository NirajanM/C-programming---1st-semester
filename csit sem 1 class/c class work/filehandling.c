#include<stdio.h>

int main()
{
    float point1=2,point2=3,point3=4;
    char name[30];
				FILE *fptr;
				fptr=fopen("data.txt","a");
				printf("enter your name:");
				fflush(stdin);
				gets(name);
				fprintf(fptr,"%s","username:");
				fprintf(fptr,"%s",name);
				fprintf(fptr,"%s","\npoint1:");
				fprintf(fptr,"%.2f",point1);
				fprintf(fptr,"%s","\npoint2:");
				fprintf(fptr,"%.2f",point2);
				fprintf(fptr,"%s","\npoint3:");
				fprintf(fptr,"%.2f",point3);
				fprintf(fptr,"%s","\n");
				fclose(fptr);
    return 0;
}