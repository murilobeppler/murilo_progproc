#include <stdio.h>
#include <string.h>

#define MAX_MARCA 15
#define MAX_CARROS 5

typedef struct {
    char marca[MAX_MARCA];
    int ano;
    float preco;
} Carro;

int main() {
    Carro carros[MAX_CARROS];
    int i;

    // Lê os dados dos carros
    for (i = 0; i < MAX_CARROS; i++) {
        printf("Digite a marca do carro %d: ", i + 1);
        scanf("%s", carros[i].marca);
        printf("Digite o ano do carro %d: ", i + 1);
        scanf("%d", &carros[i].ano);
        printf("Digite o preço do carro %d: ", i + 1);
        scanf("%f", &carros[i].preco);
    }

    // Processa os valores até p = 0
    while (1) {
        float p;
        printf("\nDigite um valor para p (0 para sair): ");
        scanf("%f", &p);
        if (p == 0)
            break;

        // Exibe as informações dos carros com preço inferior a p
        printf("\nCarros com preço inferior a %.2f\n", p);
        for (i = 0; i < MAX_CARROS; i++) {
            if (carros[i].preco < p) {
                printf("Marca: %s\n", carros[i].marca);
                printf("Ano: %d\n", carros[i].ano);
                printf("Preço: %.2f\n\n", carros[i].preco);
            }
        }
    }

    return 0;
}
