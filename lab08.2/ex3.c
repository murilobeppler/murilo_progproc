#include<stdio.h>

int main(){
    int vet[5],i;
    int* p;
    p = vet;

    printf("digite 5 numeros para montar um vetor: ");
    for (i=0;i<5;i++) {
        scanf("%d",p+i);
        
    }
    return 0;
}   