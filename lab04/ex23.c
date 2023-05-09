#include <stdio.h>

void gerar_triangulo_lateral(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = n-1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main (){
    int n;

    printf("digite o numero da largura do seu triangulo lateral de '*'. \n numero: ");
    scanf("%d", &n);

    gerar_triangulo_lateral (n);
}
