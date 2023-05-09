#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() // (MG 7%; SP 12%; RJ 15%; MS 8%)
{
    float MG, SP, RJ, MS, y;
    int x;

    MG = 1.07;
    SP = 1.12;
    RJ = 1.15;
    MS = 1.08;

    printf("qual o valor da compra: ");
    scanf("%f", &y);

    printf("escolha uma das opcoes\n");
    printf("(1) MG\n");
    printf("(2) SP\n");
    printf("(3) RJ\n");
    printf("(4) MS\n");
    scanf("%i", &x);

    switch (x)
    {
    case 1:
        printf("o valor do produto com o imposto de MG eh: %.2f", y * MG);
        break;

    case 2:
        printf("o valor do produto com o imposto de SP eh: %.2f", y * SP);
        break;

    case 3:
        printf("o valor do produto com o imposto de RJ eh: %.2f", y * RJ);
        break;

    case 4:
        printf("o valor do produto com o imposto de MS eh: %.2f", y * MS);
        break;

    default:
        printf(" a opcao escolhida nao eh valida");
        break;
    }

    return 0;
}