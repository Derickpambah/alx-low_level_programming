#include<stdio.h>
#include<stdlib.h>

/**
 * program that prints its name followed by a new line
 * return: (0) Always success
 */
int main(int argc, char *argv[])
{
  int i;

  for ( i = 0; i < argc; i++)
    {
      printf("%s",argv[0]);
    }
  return 0;
}
