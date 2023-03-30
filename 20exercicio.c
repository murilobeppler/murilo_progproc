#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main ()
{ float A,B,C;
    printf("digite o tamanho dos tres lados de um triangulo ");
    scanf("\n %f",&A);
    scanf("\n%f",&B);
    scanf("\n%f",&C);

    if ((A< B+C) && (B< A + C) && (C < A+B)) {
        if((A!=B) && (B!=C) && (C!=A) &&(B!=C)) {printf("este triangulo eh escaleno"); }
        else if ((A==C) && (A==B) && (B==C)) {printf("este triangulo eh equilatero");}
       else if ((A==B) || (B==C) || (A==C)) { printf("este triangulo eh isoceles");} 
       
    }   
      else {printf("os valores digitados nao podem formar um triangulo");}
    
    return 0;

}