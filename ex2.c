#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
 
int x,y,z; // acumuladores 
int a,b,c; //contadores
x=y=z=1;
a=b=c=0;

for ( a = 0; a < 100; a++)
{
    printf("\n%i",x);
    x += 1;
}

printf("\n");

while (b<100)
{
    printf("\n%i",y);
    y += 1;
    b += 1;
}

printf("\n");

do
{
    printf("\n%i",z);
    z += 1;
    c +=1;

} while (c<100);

    return 0;
}