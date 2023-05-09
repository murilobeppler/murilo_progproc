#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int f;
    float n;
    printf("quantas faltas vc tem?");
    scanf("%d", &f);
    printf("qual foi sua nota?");
    scanf("%f", &n);

    if (n >= 9 && n <= 10 && f <= 20)
        printf("voce eh um estudante conceito: A");
    else if ((n >= 9 && n <= 10 && f > 20 && f > 0) || (n >= 7.5 && n < 9 && f <= 20 && f > 0))
        printf("voce eh um estudante conceito: B");
    else if ((n >= 7.5 && n < 9 && f > 20 && f > 0) || (n >= 5 && n <= 7.4 && f <= 20 && f > 0))
        printf("voce eh um estudante conceito: C");
    else if ((n >= 5 && n <= 7.4 && f > 20 && f > 0) || (n >= 4 && n <= 4.9 && f <= 20 && f > 0))
        printf("voce eh um estudante conceito: D");
    else if ((n >= 4 && n <= 4.9 && f > 20 && f > 0) || (n >= 0 && n <= 3.9))
        printf("voce eh um estudante conceito: E");
    else if (n < 0 || f < 0)
        printf("voce digitou algum valor invalido");

    return 0;
}