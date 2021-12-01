#include <stdio.h>

int main(void)
{
  float Rkg, Rg, Rr;
  int ddr;
  printf("Digite quantos quilos de racao serao usados.\n");
  scanf("%f", &Rkg);
  printf("Digite quantas gramas cada gato come por dia.\n");
  scanf("%f", &Rg);
  ddr = (Rkg / 100) / 2 * Rg;
  Rr = ((ddr - 5) * Rg) / 100;
  printf("Ao final dos 5 dias irao restar %.2fkg de racao", Rr);
  return 0;
}
