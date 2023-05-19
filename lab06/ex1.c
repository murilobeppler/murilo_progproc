#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct horario
{
    int hora,minuto ,segundo;
};

struct data
{
    int dia,mes , ano;
};

struct compromisso {
    struct data date;
    struct horario time;
    char texto[100];
};

int main() {

    return 0;
}