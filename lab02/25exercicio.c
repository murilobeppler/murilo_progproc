#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  float d, b, a, c;
  printf("Digite o valor de a: \n");
  scanf("%f", &a);
  printf("Digite o valor de b: \n");
  scanf("%f", &b);
  printf("Digite o valor de c: \n");
  scanf("%f", &c);
  d = (b * b) - 4 * a * c;
  if (d > 0)
  {
    printf("A primeira raiz eh: %f", (-b + sqrt(d)) / (2 * a));
    printf("A segunda raiz eh: %f", (-b - sqrt(d)) / (2 * a));
  }
  else if (d == 0)
  {
    printf("Raiz unica! o resultado eh: %f", -b / (2 * a));
  }
  else if (d < 0)
  {
    printf("Nao existe raiz");
  }
}