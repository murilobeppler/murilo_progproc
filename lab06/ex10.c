#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[35];
    char endereco[35];
    char telefone[20];
};

void ordenarPessoas(struct Pessoa pessoas[]) {
    int i, j;
    struct Pessoa temp;

    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (strcmp(pessoas[i].nome, pessoas[j].nome) > 0) {
                temp = pessoas[i];
                pessoas[i] = pessoas[j];
                pessoas[j] = temp;
            }
        }
    }
}

int main() {
    struct Pessoa pessoas[5];

    printf("Entre com os dados de 5 pessoas:\n");

    for (int i = 0; i < 5; i++) {
        
        printf("digite o %do nome: ",i+1);
        scanf("%s",pessoas[i].nome);
        printf("digite o %do endereco: ",i+1);
        scanf("%s",&pessoas[i].endereco);
        printf("digite o %do telefone: ",i+1);
        scanf("%s",&pessoas[i].telefone);
        printf("\n");
    }

    ordenarPessoas(pessoas);

    printf("\nDados das pessoas em ordem alfabetica:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nNome: %s\n", pessoas[i].nome);
        printf("Endereco: %s\n", pessoas[i].endereco);
        printf("Telefone: %s\n", pessoas[i].telefone);
    }

    return 0;
}
