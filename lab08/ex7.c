#include <stdio.h>

int main() {
    int x,y,z;
    int* p,*q,*r;

    p=&x;
    q=&y;
    r=&z;

    printf("digite tres numeros inteiros: ");
    scanf("%d %d %d",&x,&y,&z);

    if (x<y && y<z) 
        printf("\nos numeros digitados em ordem crescente fica: %d, %d, %d", x,y,z );
    if (y<z && z<x)
        printf("\nos numeros digitados em ordem crescente fica: %d, %d, %d", y,z,x );
     if (y<x && x<z)
        printf("\nos numeros digitados em ordem crescente fica: %d, %d, %d",y,x,z );
     if (z<y && y<x)
        printf("\nos numeros digitados em ordem crescente fica: %d, %d, %d",z,y,x  );
     if (x<z && z<y)
        printf("\nos numeros digitados em ordem crescente fica: %d ,%d, %d",x,z,y  );
     if (z<x && x<y)
        printf("\nos numeros digitados em ordem crescente fica: %d ,%d ,%d", z,x,y );

    printf("\n\nOs respectivos enderecos de memoria de x,y,z sao: %p , %p , %p",p,q,r);

    return 0;
}