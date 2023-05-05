#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//chico 2 e ze 3 
int main(){
    int chico=150, ze=110,i=0;

    while (chico>ze) {
        chico = chico + (2*i);
        ze = ze + (3*i);
        i++;
    }

    printf("\n %d",i);

    return 0;
}