#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
/*Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota
da terceira prova.
a) Permita ao usuário entrar com os dados de 5 alunos;
b) Encontre o aluno com maior nota da primeira prova;
c) Encontre o aluno com maior média geral;
d) Encontre o aluno com menor média geral;
e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para
aprovação.
*/
struct alunos_bcc
{
    char matricula[35];
    char nome[25];
    int p1,p2,p3;
};

int main() {
    struct alunos_bcc a[5];
    int i, maior_nota=0, maior_media=0, menor_media=11;

    for (i=0;i<5;i++) {
        printf("\n\ndigite seu nome: ");
        scanf("%s",&a[i].nome);

        printf("\ndigite seu numero de matricula: ");
        scanf("%s",&a[i].matricula);

        printf("\ndigite em ordem cronologica a nota de suas provas:  ");
        scanf("%d %d %d",&a[i].p1 , &a[i].p2 , &a[i].p3);

    }

    for (i=0; i<5;i++) {
        if (a[i].p1>maior_nota) {
            maior_nota = a[i].p1 ; 
        }
        if ((a[i].p1 + a[i].p2 + a[i].p3)/3 > maior_media) {
            maior_media = (a[i].p1 + a[i].p2 + a[i].p3)/3;
        }
        if ((a[i].p1 + a[i].p2 + a[i].p3)/3 < menor_media) {
            menor_media =  (a[i].p1 + a[i].p2 + a[i].p3)/3;
        }
    }

    printf("\na maior nota na primeira prova eh: %d", maior_nota);

    printf("\n\na maior media dos 5 alunos foi: %d", maior_media);

    printf("\n\na menor media dos 5 alunos foi: %d", menor_media);

    return 0;
}