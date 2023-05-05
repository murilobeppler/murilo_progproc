#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int i;
    double au, s=2000;

    au = s*0.015;
    
    for (i=1996; i<=2023; i++) {    
        s = s+au;
        au = au *2;
    }

    printf("o salario do funcionario em 2023 sera de: %.2lf",s);

    return 0;
}