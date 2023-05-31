//ARQUIVO .h
typedef struct cilindro cilindro;

float crAltura (cilindro c);
float crRaio (cilindro c);
float crAreaBase (cilindro c);
float crVolume (cilindro c);


//ARQUIVO .c
#include <stdio.h>
#include "cr.h"
#define pi 3.14

typedef struct cilindro {
    float diametro;
    float altura;
} cilindro;

float crAltura (cilindro c) {
    return c.altura;
}

float crRaio (cilindro c) {
    return c.diametro/2;
}

float crAreaBase (cilindro c) {
    float r = crRaio(c);
    return pi*r*r;
}

float crVolume (cilindro c) {
    float r = crRaio(c);
    return pi*r*r*c.altura; 
}


//PROGRAMA USANDO A TAD
#include <stdio.h>
#include "cr.h"

int main () {
    cilindro c;
    int i, n;
    scanf("%d", &n);

    for(i=0; i<n; i++) {
        scanf("%f", &c.altura);
        scanf("%f", &c.diametro);

        printf("%.lf\n", crAltura(c));
        printf("%.lf\n", crRaio(c));
        printf("%.lf\n", crAreaBase(c));
        printf("%.lf\n", crVolume(c));
    }

    return 0;
}