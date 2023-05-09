#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float P, H;

    printf("qual a sua altura?(em cm)");
    scanf("%f", &H);

    printf("qual o seu peso?");
    scanf("%f", &P);

    if (H <= 120 && P <= 60)
        printf("sua classificacao eh: A");
    else if (H <= 120 && P > 60 && P <= 90)
        printf("sua classificacao eh: D");
    else if (H <= 120 && P > 90)
        printf("sua classificacao eh: G");

    else if (H > 120 && H <= 170 && P <= 60)
        printf("sua classificacao eh: B");
    else if (H > 120 && H <= 170 && P > 60 && P <= 90)
        printf("sua classificacao eh: E");
    else if (H > 120 && H <= 170 && P > 90)
        printf("sua classificacao eh: H");

    else if (H > 170 && P <= 60)
        printf("sua classificacao eh: C");
    else if (H > 170 && P > 60 && P <= 90)
        printf("sua classificacao eh: F");
    else if (H > 170 && P > 90)
        printf("sua classificacao eh: I");

    return 0;
}