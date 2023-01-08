#include<stdio.h>
//this is by just adding some integer value to the ASCII code of each character in a string 
//encrypting...
//comment decryption part and uncomment this if isn't already to run encryption
void encrypt(char *str)
{
    int i=0;
    while(str[i]!='\0')
    {
        str[i]=str[i]+4;
        i++;
    }
}

int main(){
    char str[50];
    printf("write a message you wanna encrypt:\n");
    gets(str);
    encrypt(str);
    printf("encrypted message:\n");
    printf("%s",str);
    return 0;
}

//decrypting...
//comment encyption part and uncomment this if isn't already to run decryption
// void decrypt(char *str)
// {
//     int i=0;
//     while(str[i]!='\0')
//     {
//         str[i]=str[i]-4;
//         i++;
//     }
// }

// int main(){
//     char str[50];
//     printf("write a message you wanna decrypt:\n");
//     gets(str);
//     decrypt(str);
//     printf("decrypted message:\n");
//     printf("%s",str);
//     return 0;
// }