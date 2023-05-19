#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
/*Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene
os dados em uma estrutura.*/

struct pessoa
{
    char nome[25];
    int idade;
    char ender[70];
};

int main() {
    struct pessoa a;

    printf("digite seu nome: ");
    scanf("%s", &a.nome);

    setbuf (stdin,NULL);

    printf("\n\ndigite sua idade: ");
    scanf("%d",&a.idade);

    setbuf (stdin,NULL);

    printf("\n\ndigite seu endereco: ");
    scanf("%s",&a.ender);

    return 0;
}