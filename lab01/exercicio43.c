#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//. Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre: - o total a pagar com desconto de 10%; - o valor de cada parcela, no parcelamento de 3% sem juros; - a comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto); - a comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total).

int main()
{
    float V, D, ps, cv, cp;

    printf("qual foi o total da compra\?");

    scanf("%f", &V);

    D = V * 0.9;

    printf("o valor total a ser pago apos o desconto de 10%% eh: %.2f", D);

    ps = 0.03 * V;
    printf("\n\nse parcelado em 3%% sem juros o valor de cada parcela eh: %.2f", ps);

    cv = 0.05 * D;

    printf("\n\na comissao do funcionario se a compra for feita a vista eh: %.2f", cv);

    cp = 0.05 * V;

    printf("\n\na comissao do funcionario se a compra for feita parcelada eh: %.2f", cp);

    return 0;
}