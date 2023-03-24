#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar subindo a escada. Calcule e mostre quantos degraus o usuário deverá subir para atingir seu objetivo.

int main ()
{
   float H, a, z;
    printf("qual a altura em metros de um degrau da escada que vocer vai subir\?");
   scanf("%f", &H);



   printf("quantos metros voce quer subir hoje\?");
   scanf("%f",&a);

   z= a/H;

   printf("dessa forma para que isso ocorra voce necessitara subir %.0f degraus",z);

   



    return 0;
}