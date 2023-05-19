#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
/*Faça um programa que realize a leitura dos seguintes dados relativos a um conjunto de
alunos: Matricula, Nome, Código da Disciplina, Nota1 e Nota2. Considere uma turma de até
10 alunos. Após ler todos os dados digitados, e depois de armazena-los em um vetor de
estrutura, exibir na tela a listagem final dos alunos com as suas respectivas medias finais
(use uma média ponderada: Nota1 com peso = 1.0 e Nota2 com peso = 2.0)*/

struct alunos {
    char matricula [15];
    char nome [35];
    char codigo [15];
    float p1,p2;
};

int main() {
    struct alunos alu[10];
    int i; 

    for (i=0;i<10;i++) {
        printf("\ndigite seu nome: ");
        scanf("%s",&alu[i].nome);

        setbuf (stdin,NULL);

        printf("\ndigite seu numero de matricula: ");
        scanf("%s",&alu[i].matricula);

        setbuf (stdin,NULL);

        printf("\ndigite o codigo da disciplina: ");
        scanf("%s",&alu[i].codigo);

        setbuf (stdin,NULL);

        printf("\ndigite em ordem cronologica a nota de suas provas:  ");
        scanf("%f",&alu[i].p1);
        scanf("%f", &alu[i].p2);
    }

    for (i=0;i<10 ;i++) {
        printf("\nAluno de matricula: %s",alu[i].matricula);

        printf("\nO nome do aluno %s eh: %s",alu[i].matricula, alu[i].nome);
        
        printf("\nA media ponderada do aluno %s eh: %.2f \n\n",alu[i].matricula,(alu[i].p1+(2*alu[i].p2))/3);
    }

    return 0;
}