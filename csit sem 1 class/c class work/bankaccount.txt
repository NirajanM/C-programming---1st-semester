// Create a structure representing a bank account of 5 customers .
#include<stdio.h>
#include<string.h>
// #include<stdlib.h>
struct bankaccount 
{
    int accountnum;
    char name[30];//hya char name; matra lekhda euta character matra ligna sakxa input , name haru input ligda character ko array (string) banara garna parxa ani 30 ota samma ko banauda thik hunxa manxe ko naam input ligna
    float amount;
    char address[30]; //same goes here, tara address euta word ko matra xa vane ali thorai length ko array banauda ni hunxa 30 vanda
};

int main()
{
    struct bankaccount b[5];
    printf("............Taking inputs:....\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the account number of customer%d:\n ",i+1);
        scanf("%d",&b[i].accountnum);

        //yesari %s le ligda space include garna painna so half name matra ligna milxa
        printf("Enter the first name of customer%d:\n ",i+1);
        scanf("%s",&b[i].name);

        //yesari input ligeu vane full name store garna milxa without error
        // printf("Enter the full name of customer%d:\n ",i+1);
        // fflush(stdin); //yo chai euta necessary function ho <stdlib.h> ma hunxa,string input ligda error aauda yo lekhde milxa dherai thau ma ,yesari gets bata ligda yo lekhesi tyo agillo input ligda thicheko enter key le error aaune huda yo lekhinxa 
        // gets(b[i].name);//need to include <string.h> library        
        printf("Enter the amount in account of customer%d:\n ",i+1);
        scanf("%f",&b[i].amount);

        //address ta euta word kai hunxa so yesari input ligda ni vayo ,tara input dida aru character include gareu vane code execute hudaina hai ramro sanga , only one word input deu yesari garda
        printf("Enter the address of customer%d:\n ",i+1);
        scanf("%s",&b[i].address);
        printf("\n\n");
    }
    printf(".............Printing the inputs.......\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Details of customer%d\n ",i+1);
        printf("Account number: %d\n",b[i].accountnum);//print garda chai %s le gardinxa dhukka sanga jasto string pani even including space and other characters
        printf("Customer name: %s\n",b[i].name);
        printf("Amount: %.2f\n",b[i].amount);
        printf("Customer Address: %s",b[i].address);
        printf("\n\n");
    }
    return 0;

}