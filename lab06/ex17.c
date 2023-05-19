#include <stdio.h>
#include <string.h>

#define MAX_NOME 15
#define MAX_ELETRODOMESTICOS 5

typedef struct {
    char nome[MAX_NOME];
    float potencia; // em kW
    float tempo_ativo; // em horas
} Eletrodomestico;

int main() {
    Eletrodomestico eletrodomesticos[MAX_ELETRODOMESTICOS];
    int i;

    // Lê os dados dos eletrodomésticos
    for (i = 0; i < MAX_ELETRODOMESTICOS; i++) {
        printf("Digite o nome do eletrodoméstico %d: ", i + 1);
        scanf(" %[^\n]", eletrodomesticos[i].nome);
        printf("Digite a potência do eletrodoméstico %d (em kW): ", i + 1);
        scanf("%f", &eletrodomesticos[i].potencia);
        printf("Digite o tempo ativo por dia do eletrodoméstico %d (em horas): ", i + 1);
        scanf("%f", &eletrodomesticos[i].tempo_ativo);
    }

    // Lê o tempo em dias
    int tempo_dias;
    printf("\nDigite o tempo em dias: ");
    scanf("%d", &tempo_dias);

    // Calcula o consumo total e o consumo relativo de cada eletrodoméstico
    float consumo_total = 0;
    float consumo_relativo[MAX_ELETRODOMESTICOS];

    for (i = 0; i < MAX_ELETRODOMESTICOS; i++) {
        float consumo_eletrodomestico = eletrodomesticos[i].potencia * eletrodomesticos[i].tempo_ativo * tempo_dias;
        consumo_total += consumo_eletrodomestico;
        consumo_relativo[i] = (consumo_eletrodomestico / consumo_total) * 100;
    }

    // Exibe o consumo total e o consumo relativo de cada eletrodoméstico
    printf("\nConsumo total na casa: %.2f kW\n", consumo_total);
    printf("Consumo relativo de cada eletrodoméstico:\n");
    for (i = 0; i < MAX_ELETRODOMESTICOS; i++) {
        printf("%s: %.2f%%\n", eletrodomesticos[i].nome, consumo_relativo[i]);
    }

    return 0;
}
