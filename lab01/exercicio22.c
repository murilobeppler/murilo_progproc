#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  float J, M;

  printf("digite um valor de comprimento em jardas e veja o convertiddo em metros \n");
  scanf("%f", &J);
  M = 0.91 * J;
  printf("%.2f metros", M);

  return 0;
}