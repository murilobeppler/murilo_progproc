#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int horarioseg (int h, int m, int s) {
    h = h*3600;
    m = m*60;

    return h + m + s;
}

int main () 
{
    int h,m,s, st;

    printf("digite tres numeros referentes a horas, minutos, segundos para converte-lo em segundos: \n");
    scanf("%d %d %d", &h,&m,&s);

    st = horarioseg (h,m,s);

    printf("\nO horario convertido em segundo eh: %d segundos ", st); 

    return 0;
}