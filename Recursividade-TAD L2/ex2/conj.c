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
        }
    } 

    if(achei==1) {
        return e;
    } else {
        return 0;
    }
}

void uniao (conjunto x, conjunto y) {

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