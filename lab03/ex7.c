#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int i = 1, num;
    float m;
    while (i <= 10)
    {
        printf("Digite o %do numero inteiro para media: ", i);
        scanf("%d", &num);
        if (num < 0)
        {
            i++;
        }
        else
        {
            m += num;
            i++;
        }
    }
    printf("A media foi: %.2f", m / 10);

    return 0;
}