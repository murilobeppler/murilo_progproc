#include<stdio.h>

int main(){
    double vet[10];
    double* p;
    int i;
    p = vet;

    printf("digite 10 numeros para montar um array de numeros com virgula: ");
    for (i=0;i<10;i++) {
        scanf("%f",p+i);
    }
    printf("\n As respectivas posicoes de endereco dos numeros digitados sao: ");
    for (i=0;i<10;i++){
        printf("\n%d: %p",i+1,p+i);
    }

    return 0;
}
