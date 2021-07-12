#include<stdio.h>
#include<stdlib.h>

/**
 * program that prints all arguments it receives
 * return: (0) Always success
 */
int main(int argc, char *argv[])
{
  int i;

  for ( i = 0; i < argc; i++)
    {
      printf("%s\n", argv[i]);
    }
  return (0);
}
