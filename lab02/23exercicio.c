#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  int a;
  printf("Digite o ano: \n");
  scanf("%d", &a);
  if (a % 400 == 0)
  {
    printf("O ano eh bissexto!");
  }
  else if (a % 4 == 0 && a % 100 != 0)
  {
    printf("O ano eh bissexto!");
  }
  else
  {
    printf("O ano nao eh bissexto");
  }

  return 0;
}