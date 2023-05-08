#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int x;
  float z, y;

  printf("quantos dias voce trabalhou nessa empresa\? ");
  scanf("%d", &x);

  z = 30 * x;

  printf("\nconsiderando que seu salario atual diario eh 30 reais por dia, seu salario bruto eh %.0f reais\n", z);

  y = 0.92 * z;
  printf("\n O salario apos o imposto descontado eh %.1f reais", y);

  return 0;
}