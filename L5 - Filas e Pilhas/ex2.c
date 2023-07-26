//ARQUIVO .h
#define MAX 24

typedef struct elemento {
    int hora;
    int minuto;
    int tempoTotal;
    int tempoRestante;
} paciente;

typedef struct fila {
    paciente paciente[MAX];
    int tamanho;
} fila;

void setPaciente(paciente *x, int hora, int min, int restante);
int setFilaVazia(fila *fila);
int setFila(fila *fila, paciente elemento);
int remover(fila *fila);
int verificador(fila *fila);


//ARQUIVO .C
#include <stdio.h>
#include <stdlib.h>

void setPaciente(paciente *x, int hora, int min, int restante) {
    x->hora = hora;
    x->minuto = min;
    x->tempoRestante = restante;
}

int setFilaVazia(fila *fila) {
    fila->tamanho = 0;

    return 0;
}

//colocar o primeiro elemento na fila vazia
int setFila(fila *fila, paciente elemento) {
    fila->paciente[0] = elemento;
    fila->tamanho = 1;

    return 0;
}

int inserir(fila *fila, paciente elemento) {
    if(fila->tamanho == MAX) {
        return 1; /*erro: fila cheia*/

    } else {
        fila->paciente[fila->tamanho] = elemento;
        fila->tamanho++;

        return 0;
    }
}

int remover(fila *fila) {
    int i;
    paciente elementoResultado;

    if(fila->tamanho==0) {
        return 1; /*erro: fila vazia*/

    } else {
        elementoResultado = fila->paciente[0];
        for(i=0; i<(fila->tamanho-1); i++) {
            fila->paciente[i] = fila->paciente[i+1];
        }
    }

    fila->tamanho--;
    return 0;
}

int verificador(fila *fila) {
    int i;
    int cemiterio = 0;
    int proximo = fila->paciente[0].hora*60 + fila->paciente[0].minuto + fila->paciente[0].tempoRestante;

    for(i=0; i<fila->tamanho; i++) {
        fila->paciente[i].tempoTotal = fila->paciente[i].hora*60 + fila->paciente[i].minuto + fila->paciente[i].tempoRestante;
    }

    for(i=0; i<fila->tamanho; i++) {
        if (fila->paciente[i].tempoTotal<=proximo) {
            cemiterio++;
        }

        proximo += 30;
    }

    return cemiterio;
}


//PROGRAMA USANDO A TAD (main)
#include <stdio.h>
#include <stdlib.h>

int main() {
    fila pacientes;
    paciente y;
    int i, n, hora, min, restante;

    setFilaVazia(&pacientes);
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d %d %d", &hora, &min ,&restante);
        setPaciente(&y, hora, min, restante);

        if(i==0) {
            setFila(&pacientes, y);
        } else {
            inserir(&pacientes, y);
        }
    }

    printf("%d\n", verificador(&pacientes));

    return 0;
}