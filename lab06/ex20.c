#include <stdio.h>

struct dma {
    int dia;
    int mes;
    int ano;
};

int dias_do_mes(int mes, int ano) {
    int dias_mes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (mes == 2 && (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)))
        return 29;
    else
        return dias_mes[mes - 1];
}

int data_para_dias(struct dma data) {
    int total_dias = 0;
    int i;

    for (i = 1; i < data.mes; i++)
        total_dias += dias_do_mes(i, data.ano);

    total_dias += data.dia;

    return total_dias;
}

int diferenca_datas(struct dma data1, struct dma data2) {
    int total_dias1 = data_para_dias(data1);
    int total_dias2 = data_para_dias(data2);

    int diferenca = total_dias2 - total_dias1;

    return diferenca;
}

int main() {
    struct dma data1, data2;

    printf("Digite a primeira data (dia mes ano): ");
    scanf("%d %d %d", &data1.dia, &data1.mes, &data1.ano);

    printf("Digite a segunda data (dia mes ano): ");
    scanf("%d %d %d", &data2.dia, &data2.mes, &data2.ano);

    int diferenca = diferenca_datas(data1, data2);

    printf("Número de dias entre as duas datas: %d\n", diferenca);

    return 0;
}
