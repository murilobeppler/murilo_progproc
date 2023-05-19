#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
/*Construa uma estrutura aluno com nome, número de matrıcula e curso. Leia do usuário a
informação de 5 alunos, armazene em um vetor dessa estrutura e imprima os dados na tela.*/

struct aluno {
    char nome[25];
    char n_matricula[15];
    char curso[35];
};

int main() {
    int i;
    struct aluno a[5];



    for (i=0;i<5;i++) {
        printf("\n\ndigite seu nome: ");
        scanf("%s",&a[i].nome);

        printf("\ndigite seu numero de matricula: ");
        scanf("%s",&a[i].n_matricula);

        printf("\ndigite seu curso: ");
        scanf("%s",&a[i].curso);

    }

    for (i=0;i<5 ;i++) {
        printf("\nO nome do aluno %d eh: %s",i+1,a[i].nome);
        
        printf("\nO numero de matricula do aluno %d eh: %s",i+1,a[i].n_matricula);
        
        printf("\nO curso do aluno %d eh: %s \n\n",i+1,a[i].curso);
    }

    return 0;
}