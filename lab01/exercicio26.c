#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  float H, M;

  printf("digite uma area em metros quadrados e veja ela convertida em hectares \n");
  scanf("%f", &M);
  H = M * 0.0001;
  printf("%.2f hectares", H);

  return 0;
}