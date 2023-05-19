#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct dados {
    char nome[35];
    char endereco[50];
    int d,m,a;
    char cidade [20];
    char CEP[11];
    char email[35];
};

int validade_data (int m, int d, int a) {
     switch (m)
    {
    case 1:
        if (d>31)
        

    case 2:
        if
        
    case 3:
        if
        
    case 4:
        if
        
    case 5:
        if
        
    case 6:
        if
        
    case 7:
        if
        
    case 8:
        if
        
    case 9:
        if
        
    case 10:
        if
        
    case 11:
        if
        
    case 12:
        if
        
    
    default:
        
    }
   
}

int main() {
    struct dados a;
    int i;

    printf("digite seu nome: ");
    fgets (a.nome,35,stdin);
    printf("digite seu enederco: ");
    fgets (a.endereco,50,stdin);
    printf("digite sua data de nsacimento (dd/mm/aaaa): ");
    scanf("%d %d %d", &d,&m,&a);
    printf("digite a sua cidade: ");
    fgets(a.cidade, 20, stdin);
    printf("digite seu CEP: ");
    fgets(a.CEP,11,stdin);
    printf("digite seu e-mail: ");
    fgets(a.email,35,stdin);

    switch (m)
    {
    case 1:
        if
        break;
    
    default:
        break;
    }
    return 0;
}