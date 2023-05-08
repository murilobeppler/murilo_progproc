#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  float J, M;

  printf("digite um comprimento em metros ee veja-o sendo convertido em jardas");
  scanf("%f", &M);
  J = M / 0.91;
  printf("%.2f jardas", J);

  return 0;
}