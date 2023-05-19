#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct aluno {
    char nome[30];
    char matricula[25];
    float media;
};

int main() {
    struct aluno a[10],aprovados[10],reprovados[10];
    int i, cont1=0, cont2=0;

    printf("digite os dados dos 10 alunos.\n");
    for (i=0;i<10;i++) {
        printf("aluno %d:\n",i+1);
        printf("nome: \n");
        scanf("%s",a[i].nome);
        printf("matricula: \n");
        scanf("%s",a[i].matricula);
        printf("media final: \n");
        scanf("%f",&a[i].media);
        setbuf(stdin,NULL);

        if (a[i].media>=5) {
            aprovados[i] = a[i];
            cont1++;
        } 
        else{ reprovados [i-cont1] = a[i];
             cont2++;
        }

    }

    printf("\n\nos alunos reprovados sao:\n");
    for (i=0;i<cont2;i++) {
        printf("aluno %d\nNome: %s\nMatricula: %s\nMedia: %.2f\n\n",i+1,reprovados[i].nome,reprovados[i].matricula,reprovados[i].media);
        printf("\n");
    } 
    printf("\n\nos alunos aprovados sao:\n");
    for (i=0;i<cont1;i++) {
        printf("aluno %d\nNome: %s\nMatricula: %s\nMedia: %.2f\n\n",i+1,aprovados[i].nome,aprovados[i].matricula,aprovados[i].media);
        printf("\n");
    }    


    return 0;
}