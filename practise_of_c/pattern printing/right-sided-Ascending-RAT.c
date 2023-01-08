/*
 s s s s *
 s s s * *
 s s * * *
 s * * * *
 * * * * *
 */
#include <stdio.h>

int main()
{
  for (int i = 0; i < 5; i++)
  {
    for (int j = i; j < 4; j++)
    {
      printf("\t");
    }
    for (int k = 0; k <= i; k++)
      printf("*\t");
    printf("\n");
  }
  return 0;
}