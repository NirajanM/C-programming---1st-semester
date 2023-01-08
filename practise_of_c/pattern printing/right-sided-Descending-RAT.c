/*
 * * * * *
 s * * * *
 s s * * *
 s s s * *
 s s s s *
 */
#include <stdio.h>

int main()
{
  for (int i = 0; i < 5; i++)
  {
    for (int space = 0; space < i; space++)
      printf("\t");
    for (int star = i; star < 5; star++)
      printf("*\t");
    printf("\n");
  }
  return 0;
}