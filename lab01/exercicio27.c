#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  float H, M;

  printf("digite uma area em hectares e veja ela convertida em metros quadrados");
  scanf("%f", &H);
  M = H * 10000;
  printf("%.2f metros quadrados", M);

  return 0;
}