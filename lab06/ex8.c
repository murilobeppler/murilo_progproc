#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct dados {
    char nome[25];
    int idade;
    char sexo;
    int CPF[11];
    int dia,mes,ano;
    int codigo;
    char cargo[30];
    float salario;
};

int main() {
    struct dados pes;
    char masculino[10] = "masculino";
    char feminino[10] = "feminino";
    char str[10];
    int i;

    printf("digite seu nome: ");
    scanf("%s",&pes.nome);
    printf("digite sua idade: ");
    scanf("%d",&pes.idade);
    setbuf (stdin,NULL);
    printf("digite seu sexo (m/M ou F/f): ");
    scanf("%c",&pes.sexo);
    if (pes.sexo=='m' || pes.sexo=='M') {
        for (i=0;i<10;i++){
        str[i] = masculino[i];
        }
        
    }
    if (pes.sexo=='f' || pes.sexo=='F') {
        str[i] = feminino[i];
    }
    printf("digite seu CPF: ");
    scanf("%s",&pes.CPF);
    printf("digite sua data de nascimento: ");
    scanf("%d %d %d",&pes.dia, &pes.mes , &pes.ano);
    printf("digite o codigo do setor: ");
    scanf("%d",&pes.codigo);
    printf("digite seu cargo: ");
    scanf("%s",&pes.cargo);
    printf("digite seu salario: ");
    scanf("%f",&pes.salario);

    printf("\nOs dados do funcionario inseridos sao:");
    printf("\nnome:%s",pes.nome);
    printf("\nidade:%d",pes.idade);
    printf("\nsexo:%s",str);
    printf("\nCPF:%s",pes.CPF);
    printf("\ndata de nascimento: %d / %d / %d",pes.dia,pes.mes,pes.ano);
    printf("\ncodigo de setor: %d",pes.codigo);
    printf("\ncargo:%s",pes.cargo);
    printf("\nsalario: %.2f",pes.salario);
    
    return 0;
}