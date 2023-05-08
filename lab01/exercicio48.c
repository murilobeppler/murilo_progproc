#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.

int main()
{
    int total_segundos, horas, minutos, segundos;

    // lê o valor total de segundos
    printf("Digite um valor inteiro em segundos: ");
    scanf("%d", &total_segundos);

    // converte segundos em horas, minutos e segundos
    horas = total_segundos / 3600;
    minutos = (total_segundos % 3600) / 60;
    segundos = (total_segundos % 3600) % 60;

    // imprime o resultado
    printf("%d segundos equivalem a %d horas, %d minutos e %d segundos\n", total_segundos, horas, minutos, segundos);

    return 0;
}