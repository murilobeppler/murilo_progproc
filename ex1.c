#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
 
int x,i; // i eh o contador
x=3; // acumulador

for ( i = 0; i < 5; i++)
{
    printf("\n%i", x);
    x += 3;    
}

    return 0;
}