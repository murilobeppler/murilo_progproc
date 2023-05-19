#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define PI 3.141592

struct polar {
    float raio;
    float argumento;
};

struct cartesiano {
    float x;
    float y;
};

int main() {
    struct polar pol;
    struct cartesiano car;

    printf("digite um raio e um argumento (coordenadas polares): ");
    scanf("%f %f", &pol.raio, &pol.argumento);

    car.x = pol.raio*cos(pol.argumento);
    car.y = pol.raio*sin(pol.argumento);

    printf("\nas coordenadas digitadas em coordenadas cartesianas eh: (%.2f , %.2f)",car.x, car.y);

    return 0;
}