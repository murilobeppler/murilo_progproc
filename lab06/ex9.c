#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
/*Faça um programa que faca operações simples de números complexos:
 Crie e leia dois números complexos z e w, compostos por parte real e parte imaginária;
 Apresente a soma, subtração e produto entre z e w, nessa ordem, bem como o módulo
de ambos. */
struct complexo {
    float real;
    float imaginaria;
};

int main() {
    struct complexo z,w;

    printf("digite um numero complexo (parte real e parte imaginaria) respectivamente: ");
    scanf("%f %f",&z.real, &z.imaginaria);

    printf("digite um outro numero complexo (parte real e parte imaginaria) respectivamente: ");
    scanf("%f %f",&w.real, &w.imaginaria);

    printf("\na soma desses dois numeros complexos eh: %.2f + %.2fi", (z.real+w.real), (z.imaginaria+w.imaginaria) );
    printf("\na subtracao desses dois numeros complexos eh: %.2f + %.2fi ", (z.real - w.real), (z.imaginaria - w.imaginaria));
    printf("\na multiplicacao desses dois numeros complexos eh: %.2f + %.2fi ", (z.real*w.real) - (z.imaginaria*w.imaginaria), (z.real*w.imaginaria) - (z.imaginaria*w.real));
    printf("\nO modulo do primeiro numero complexo eh: %.2f + %.2fi ", sqrt((z.real * z.real) + (z.imaginaria * z.imaginaria)));
    printf("\nO modulo do segundo numero complexo eh: %.2f + %.2fi ",sqrt((w.real * w.real) + (w.imaginaria * w.imaginaria)));

    return 0;
}