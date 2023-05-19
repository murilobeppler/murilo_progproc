#include <stdio.h>

#define MAX_VOOS 5
#define MAX_AEROPORTOS 5

typedef struct {
    int origem;
    int destino;
} Voo;

typedef struct {
    int codigo;
    int voos_saida;
    int voos_chegada;
} Aeroporto;

int main() {
    Voo voos[MAX_VOOS];
    Aeroporto aeroportos[MAX_AEROPORTOS];

    int i;

    // Lê os dados dos voos
    for (i = 0; i < MAX_VOOS; i++) {
        printf("Digite o código de aeroporto de origem do voo %d: ", i + 1);
        scanf("%d", &voos[i].origem);
        printf("Digite o código de aeroporto de destino do voo %d: ", i + 1);
        scanf("%d", &voos[i].destino);
    }

    // Inicializa os aeroportos com quantidade de voos igual a zero
    for (i = 0; i < MAX_AEROPORTOS; i++) {
        aeroportos[i].codigo = i;
        aeroportos[i].voos_saida = 0;
        aeroportos[i].voos_chegada = 0;
    }

    // Atualiza a quantidade de voos para cada aeroporto
    for (i = 0; i < MAX_VOOS; i++) {
        int origem = voos[i].origem;
        int destino = voos[i].destino;

        aeroportos[origem].voos_saida++;
        aeroportos[destino].voos_chegada++;
    }

    // Exibe a quantidade de voos para cada aeroporto
    printf("\nQuantidade de voos para cada aeroporto:\n");
    for (i = 0; i < MAX_AEROPORTOS; i++) {
        printf("Aeroporto %d:\n", aeroportos[i].codigo);
        printf("Voos de saída: %d\n", aeroportos[i].voos_saida);
        printf("Voos de chegada: %d\n", aeroportos[i].voos_chegada);
        printf("\n");
    }

    return 0;
}
