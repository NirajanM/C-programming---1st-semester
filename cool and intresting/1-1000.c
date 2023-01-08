#include <stdio.h>

int main()
{
    int count=0;
    for (int i=0; i<10; i++)
    {
        for (int j=0; j<10; j++)
        {
            for(int k=0;k<10;k++)
            {
                for(int l=0;l<10;l++)
                {
                        if (i==1)
                        {
                            count++;
                        }
                        if (j==1)
                        {
                            count++;
                        }
                        if (k==1)
                        {
                            count++;
                        }
                        if (l==1)
                        {
                            count++;
                        }
                }
            }
        }
    }
    count++;
    printf("%d", count);
    return 0;
}