#include<stdlib.h>
#include<stdio.h>

/**
 * program that multiplies two numbers
 * return: (0) Always success
 */
int main(int argc, char *argv[])
{
  int i;
  int product = 1;

  if (argc > 2 && argc < 4)
    {
      for (i = 1; i < argc; i++)
        {
	  product *= atoi(argv[i]);
        }
      printf("%d\n", product);
    }
  else
    {
      printf("Error\n");
      return (1);
    }
  return (0);
}
