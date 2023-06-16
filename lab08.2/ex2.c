#include<stdio.h>

int main(){
    int mat[3][3],i,j;
    int* p;
    p = mat;

    printf("digite nove numeros para preencher uma matriz 3X3: ");
    for (i=0; i<3;i++) {
        for (j=0;j<3;j++) {
        scanf("%d",((p+i)+j));
        }
    }

    for (i=0;i<3;i++) {
        for (j=0;j<3;j++){
            printf("\n O endereco de [%d]x[%d] = %p", i+1,j+1,((p+i)+j));
        }
    }
    
    return 0;
}   