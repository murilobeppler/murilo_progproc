#include <stdio.h>
#include <string.h>

#define MAX_COMPROMISSOS 5
#define MAX_DESCRICAO 60

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    char compromisso[MAX_DESCRICAO];
    Data data;
} Compromisso;

int main() {
    Compromisso agenda[MAX_COMPROMISSOS];
    int i;

    // Lê os dados dos compromissos
    for (i = 0; i < MAX_COMPROMISSOS; i++) {
        printf("Digite a descrição do compromisso %d: ", i + 1);
        scanf(" %[^\n]", agenda[i].compromisso);
        printf("Digite a data do compromisso %d (DD MM AAAA): ", i + 1);
        scanf("%d %d %d", &agenda[i].data.dia, &agenda[i].data.mes, &agenda[i].data.ano);
    }

    // Busca compromissos por mês e ano
    int mes, ano;
    do {
        printf("\nDigite o mês (ou 0 para sair): ");
        scanf("%d", &mes);
        if (mes == 0)
            break;
        printf("Digite o ano: ");
        scanf("%d", &ano);

        printf("\nCompromissos do mês %d, ano %d:\n", mes, ano);
        for (i = 0; i < MAX_COMPROMISSOS; i++) {
            if (agenda[i].data.mes == mes && agenda[i].data.ano == ano) {
                printf("Descrição: %s\n", agenda[i].compromisso);
                printf("Data: %02d/%02d/%d\n\n", agenda[i].data.dia, agenda[i].data.mes, agenda[i].data.ano);
            }
        }
    } while (mes != 0);

    return 0;
}
