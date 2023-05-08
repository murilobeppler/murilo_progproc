#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  float q, w, x, y, z; // x é o valor do salario base do funcionario

  printf("qual o seu salario base\? ");
  scanf("%f", &x);

  y = 1.05 * x; // y = salario bonificado
  q = 0.07 * x;
  w = y - q;

  printf("apos a gratificacao de 5%% e o imposto de 7%% (sobre o salario base) o salario final eh: %.2f", w);

  return 0;
} // Receba o salário-base de um funcionário. Calcule e imprima o salário a receber, sabendo-se que esse funcionário tem uma gratificação de 5% sobre o salário-base. Além disso, ele paga 7% de imposto sobre o salário-base.