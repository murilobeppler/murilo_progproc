#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  int m;
  float x, y, z;
  printf("Digite tres numeros:\n");
  scanf("%f%f%f", &x, &y, &z);
  printf("Escolha uma das medias:\n1- Geometrica;\n2- Ponderada;\n3- Harmonica;\n4- Aritmetica;\n");
  scanf("%d", &m);
  switch (m)
  {
  case 1:
    printf("A media eh: %f", cbrt(x * y * z));
    break;
  case 2:
    printf("A media eh: %f", ((1 * x) + (2 * y) + (3 * z)) / 6);
    break;
  case 3:
    printf("A media eh: %f", 1 / (1 / x + 1 / y + 1 / z));
    break;
  case 4:
    printf("A media eh: %f", (x + y + z) / 3);
    break;
  default:
    printf("Nao existe essa opcao");
  }
  return 0;
}
