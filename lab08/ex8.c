#include <stdio.h>

int main() {
    int i, vet [6];
    int* p=vet;

    printf("digite seis numeros para montar um vetor: ");
    for (i=0; i<6;i++) {
        scanf("%d", &vet[i]);
    }
    printf("Os valores desse vetor em ordem sao: \n");
    for (i=0;i<6;i++) {
        printf("%d; ",*(p+i));
    }

    return 0;

}