#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv)
{
  int x = atoi(argv[1]);
  printf("div %d/2 %d, %d/5 %d\n", x, x/2, x, x/5);
}
