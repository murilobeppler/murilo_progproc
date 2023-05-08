#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  float K, L;

  printf("digite um valor de massa em libras e veja-o convertido em quilogramas \n");
  scanf("%f", &L);
  K = L * 0.45;
  printf("%.2f quilogramas", K);

  return 0;
}