#include <stdio.h>
#include <string.h>

#define MAX_TITULO 30
#define MAX_AUTOR 15
#define MAX_LIVROS 5

typedef struct {
    char titulo[MAX_TITULO];
    char autor[MAX_AUTOR];
    int ano;
} Livro;

int main() {
    Livro livros[MAX_LIVROS];
    int i;

    // Lê os dados dos livros
    for (i = 0; i < MAX_LIVROS; i++) {
        printf("Digite o título do livro %d: ", i + 1);
        scanf(" %[^\n]", livros[i].titulo);
        printf("Digite o autor do livro %d: ", i + 1);
        scanf(" %[^\n]", livros[i].autor);
        printf("Digite o ano do livro %d: ", i + 1);
        scanf("%d", &livros[i].ano);
    }

    // Busca um livro por título
    char tituloBusca[MAX_TITULO];
    printf("\nDigite o título do livro que deseja buscar: ");
    scanf(" %[^\n]", tituloBusca);

    // Mostra os dados de todos os livros encontrados
    int encontrados = 0;
    printf("\nLivros encontrados com o título \"%s\":\n", tituloBusca);
    for (i = 0; i < MAX_LIVROS; i++) {
        if (strcmp(livros[i].titulo, tituloBusca) == 0) {
            printf("Título: %s\n", livros[i].titulo);
            printf("Autor: %s\n", livros[i].autor);
            printf("Ano: %d\n\n", livros[i].ano);
            encontrados++;
        }
    }

    // Exibe mensagem se nenhum livro for encontrado
    if (encontrados == 0) {
        printf("Nenhum livro encontrado com o título \"%s\".\n", tituloBusca);
    }

    return 0;
}
