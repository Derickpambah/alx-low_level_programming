#include<stdlib.h>
#include<stdio.h>

/**
 * Program that prints the number of arguments passed to it
 * return: (0) Always success
 */
int main(int argc, char *argv[])
{
  (void)argv;
  int i;

  for ( i = 0; i < argc; i++)
    {
      printf("%d\n", argc);
    }
  return 0;
}
