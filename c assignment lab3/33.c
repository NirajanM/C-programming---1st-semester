// Write a menu based program to perform the following operation according to the choice of the user.
// 1.To find sum of digits of a given number
// 2.To reverse a given number
// 3.To check the given number is palindrome number or not
// 4.To check the given number is Armstrong number or not
// 5.Quit
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int sumofdigit(int n)
{
    int sum=0;
    do
    {
        sum+=n%10;
        n=n/10;
    } while (n!=0);
    return sum;
}

int reverse(int n)
{
    int reverse=0,temp;
    do
    {
       temp=n%10;
       reverse=reverse*10+temp;
       n=n/10;
    } while (n!=0);
    return reverse;
}

int sumofcubeofdigits(int n)
{
    int sum=0;
    do
    {
       sum=sum+pow(n%10,3);
       n=n/10;
    } while (n!=0);
    return sum;   
}

int main(){
    int number,num;
    printf("***Assignment by Nirajan Malla***\n");
    printf("which operation do you wanna perform ?\n1.To find sum of digits of a given number\n2.To reverse a given number\n3.To check the given number is palindrome number or not\n4.To check the given number is Armstrong number or not\n5.Quit\n");
    printf("enter the corresponding number : ");
    scanf("%d",&number);
    
    switch (number)
    {
    case 1:
        printf("enter the number :");
        scanf("%d",&num);
        printf("the sum of its digits is :%d",sumofdigit(num));
        break;

    case 2:
        printf("enter the number :");
        scanf("%d",&num);
        printf("it's reverse is :%d",reverse(num));
        break;

    case 3:
        printf("enter the number :");
        scanf("%d",&num);
        if(reverse(num)==num)
        {
            printf("it is a palindrome number");
        }
        else
        {
            printf("it is not a palindrome number");
        }
        break;

    case 4:
        printf("enter the number :");
        scanf("%d",&num);
        if(sumofcubeofdigits(num)==num)
        {
            printf("Yes,it is a armstrong number");
        }
        else
        {
            printf("No,it is not a armstrong number");
        }
        break;

    case 5:
        exit(1);
        break;
    
    default:
        printf("invalid input!");
        break;
    }
    return 0;
}