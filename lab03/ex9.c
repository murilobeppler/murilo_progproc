#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
      int i, num;

      printf("Digite um numero para conferir quantos impares possui:\n ");
      scanf("%d", &num);

      for (i = 0; i <= num; i++)
      {
            printf("%d ", 1 + (2 * i));
      }
      return 0;
}