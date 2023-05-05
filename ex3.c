#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int i,x;
    i=0;
    x=10;
    while (i<10) {

        printf("\n%i",x);
        x -= 1;
        i += 1;
    }
    printf("\n\nFIM!");

    return 0;
}