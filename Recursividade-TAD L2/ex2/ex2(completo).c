//ARQUIVO .h
typedef struct conjunto conjunto;

int elemento (conjunto x, int e);

void uniao (conjunto x, conjunto y);

void intersecao (conjunto x, conjunto y);


//ARQUIVO .c
#include <stdio.h>
#include "conj.h"

typedef struct conjunto {
    int tam;
    int *elements;
} conjunto;

int elemento (conjunto x, int e) {
    int i, achei;
    for(i=0; i<x.tam; i++) {
        if(x.elements[i]==e) {
            achei = 1;
            break;
        }
    } 

    if(achei==1) {
        return e;
    } else {
        return NULL;
    }
}

void uniao (conjunto x, conjunto y) {
    //não terminada :/
}

void intersecao (conjunto x, conjunto y) {
    int i, j;

    for (i=0;i<x.tam; i++) {
        for(j=0;  j<y.tam; j++) {
            if(x.elements[i]==y.elements[j]) {
                printf("%d ", x.elements);
            }
        }
    }
    printf("\n");
}


//PROGRAMA USANDO
#include <stdio.h>
#include "conj.h"

int main () {

    conjunto a,  b;
    int i;

    printf("DIGITE O TAMANHO DO PRIMEIRO CONJUNTO\n");
    scanf("%d", &a.tam);
    
}