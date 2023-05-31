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
    int r = crRaio(c);
    return pi*r*r;
}

float crVolume (cilindro c) {
    float r = crRaio(c);
    return pi*r*r*c.altura; 
}