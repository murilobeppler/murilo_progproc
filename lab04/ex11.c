#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float medias_A_P (float x, float y, float z, char a) {
    if (a == 'A' || a=='a') {
        return (x+y+z)/3;
    }
    if (a== 'P' || a== 'p') {
        return (x + y + z)/10;
    }

}

int main () 
{
    float x,y,z, M;
    char a;

    printf ("digite a/A ou p/P para calcular a media aritimetica ou ponderada respectivamentem (os pesos da media ponderada sao 5,3,2). \n tipo de media: ");
    scanf("%c", &a);

    printf("agora digite tres valores de notas para fazer a media escolhida. \n notas:  ");
    scanf("%f %f %f", &x, &y, &z);

    M = medias_A_P (x,y,z,a);

    printf("\n O valor da media eh: %.2f", M);

    return 0;
}