#include <stdio.h>

int main()
{
    int N;

    printf("enter the value of N:");
    scanf("%d", &N);

    int odd[N];
    int even[N];
    int array[N];
    int num;
    int j=0,k=0;

    FILE *ptr;
    ptr = fopen("NUMBER.TXT", "w");

    for (int i = 0; i <= N; i++)
    {
        fprintf(ptr,"%d ",i);
    }
    fclose(ptr);

    ptr = fopen("NUMBER.TXT", "r");

    for (int i = 0; i <= N; i++)
    {
        fscanf(ptr, "%d", &array[i]);
    }
    fclose(ptr);

    for (int i = 0; i <= N; i++)
    {
        if(array[i]%2==0)
        {
            even[j]=array[i];
            j++;
        }
        else
        {
            odd[k]=array[i];
            k++;
        }
    }


    ptr = fopen("EVEN.TXT","w");

     for (int i = 0; i < j ; i++)
    {
        fprintf(ptr,"%d ",even[i]);
    }
    fclose(ptr);


    ptr = fopen("ODD.TXT","w");

     for (int i = 0; i < k ; i++)
    {
        fprintf(ptr,"%d ",odd[i]);
    }
    fclose(ptr);


    return 0;
}

// while ((ch = fgetc(filePointer)) != EOF)
//         {
//             printf("%c", ch);
//         }