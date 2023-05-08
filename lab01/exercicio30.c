#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  float R, D;

  printf("digite um valor em reais e veja-o convertido em dolares \n");
  scanf("%f", &R);
  D = R / 5.29;
  printf("%.2f dolares ", D);

  return 0;
}