#include <stdio.h>
#include "cr.h"

int main () {
    cilindro c;

    printf("DIGITE O DIAMETRO DO CILINDRO\n");
    scanf("%f", &c.diametro);

    printf("DIGITE A ALTURA DO CILINDRO\n");
    scanf("%f", &c.altura);

    printf("\nAS EXUCULTADAS FORAM:\n");
    printf("ALTURA DO CILINDRO: %.2lf\n", crAltura(c));
    printf("RAIO DO CILINDRO: %.2lf\n", crRaio(c));
    printf("AREA DA BASE DO CILINDRO: %.2lf\n", crAreaBase(c));
    printf("VOLUME DO CILINDRO: %.2lf\n", crVolume(c));
}