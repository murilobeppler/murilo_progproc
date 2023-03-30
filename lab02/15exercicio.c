#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main ()
{   int x;
    printf("digite um numero de 1 a 7\n\n");
    scanf("%i", &x );
    switch (x)
    {
    case  1: printf("domingo");
        
        break;

        case  2: printf("segunda");
        
        break;
        case  3: printf("terca");
        
        break;
        case  4: printf("quarta");
        
        break;
        case  5: printf("quinta");
        
        break;
        case  6: printf("sexta");
        
        break;

        case  7: printf("sabado");
        
        break;

        default: printf("voce nao digitou um numero de 1 a 7");
        break;
    
    
    }
    return 0;

}