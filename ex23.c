#include <stdio.h>

int main()
{
    int v, l=1, sup=1, num=1;
    printf("Digite um valor para construir o Triangulo de Floyd: ");
    scanf("%d", &v);
    while (l<=v){
        while(l>=sup){
            printf("%d ", num);
            sup++;
            num++;
        }
        printf("\n");
        sup=1;
        l++;
    }
    return 0;
}