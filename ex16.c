#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void imprime();

int main(){
    float n1,n2,op,a,b,c,d;
    int x,menu =1;

    do {
        imprime();
        scanf("%d",&x);
        if(x>=1 && x<5){
            printf("digite dois numeros: ");
            scanf("%f %f",&n1,&n2);
        }
        switch (x)
        {
            case 1:
                a= n1 + n2;
                printf("%.2f", a);
                break;

            case 2:
                b= n1 - n2;
                printf("%.2f", b);
                break;

            case 3:
                c= n1*n2;
                printf("%.2f",c);
                break;

            case 4:
                d= n1/n2;
                printf("%.2f",d);
                break;

            case 5:
                menu = 0;
                break;

            default: 
                printf("opcao invalida\n digite uma opcao valida");
        }
    } while (menu!=0);
    return 0;
}


void imprime()
{
    printf("\nescolha uma das opcoes abaixo para fazer a tal operacao\n");
    printf("opcao 1: adicao \n");
    printf("opcao 2: subtracao \n");
    printf("opcao 3: multiplicacao \n");
    printf("opcao 4: divisao \n");
    printf("opcao 5: saida\n\n");
    printf("opcao: ");
}