#include <stdio.h>

int main(void)
{
  int num;
  printf("\nDigite um numero.\n");
  scanf("%i", &num);
  if (num >= 100 && num <= 200)
  {
    printf("O numero %i se encontra no intervelo.", num);
  }
  else
  {
    printf("O numero %i não se encontra no intervelo.", num);
  }
  return 0;
}
