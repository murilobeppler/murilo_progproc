#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void convmes (int x, int d, int a) {
    switch (x)
    {
    case 1:
        printf("%d de janeiro de %d ", d,a);
        break;

    
    case 2:
        printf("%d de fevereirio de %d ", d,a);
        break;

    
    case 3:
        printf("%d de marco de %d ", d,a);
        break;

    
    case 4:
        printf("%d de abril de %d ", d,a);
        break;

    case 5:
        printf("%d de maio de %d ", d,a);
        break;

    case 6:
        printf("%d de junho de %d ", d,a);
        break;

    case 7:
        printf("%d de julho de %d ", d,a);
        break;

    case 8:
        printf("%d de agosto de %d ", d,a);
        break;

    case 9:
        printf("%d de setembro de %d ", d,a);
        break;

    case 10:
        printf("%d de outubro de %d ", d,a);
        break;

    case 11:
        printf("%d de novembro de %d ", d,a);
        break;

    case 12:
        printf("%d de dezembro de %d ", d,a);
        break;
    
    default:
        break;
    }


}

int main () 
{
    int d,m,a;

    printf("digite uma data dd/mm/aaaa: ");
    scanf("%d %d %d", &d,&m,&a);

    convmes (m,d,a);

    return 0;
}