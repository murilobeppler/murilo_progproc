#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float operacoes (float a, float b, char op) {
    switch (op)
    {
    case '+':
        return a + b;
        
    case '-':
        return a-b;
        
    case '*':
        return a*b;
        
    case '/':
        return a/b;
        
    default:
     return 0;
    }
}

int main () 
{
    float a,b,R;
    char op;

    printf("digite um dos simbolos a seguir para efetuar tal operacao \n + \n - \n * \n / \n\n");
    scanf("%c", &op);

    printf("agora digite dois numeros para realizar a operacao selecionada. \n numeros: ");
    scanf("%f %f", &a, &b);

    R = operacoes (a,b,op);

    printf("\n O resultado da operecao escolhida eh: %.2f", R);

    return 0;
}