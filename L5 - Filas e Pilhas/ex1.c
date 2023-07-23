//ARQUIVO .h
struct expre {
    char expressao[1001];
    int tamanho;
    int parenteses;
};
typedef struct expre expressao;

void setExpress(expressao **x, char a[]);
void verificador(expressao **x);


//ARQUIVO .c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void setExpress(expressao **x, char a[]) {
    expressao *y = (expressao*) malloc(sizeof(expressao));
    
    strcpy(y->expressao, a);
    y->tamanho = strlen(y->expressao);
    y->parenteses = 0;
    *x = y;
}

int verificadorRapido(expressao **x) {
    expressao *y = *x;
    int i;

    for(i=0; i<y->tamanho; i++) {
        if(y->expressao[i]=='(') {
            return 0;
        }

        if(y->expressao[i]==')') {
            return 1;
        }
    }

    return 0;
}

void verificador(expressao **x) {
    expressao *y = *x;
    int i;
    
    if(verificadorRapido(&y) == 0) {
        for(i=0; i<y->tamanho; i++) {
            if(y->expressao[i]=='(') {
                y->parenteses++;  
            }

            if(y->expressao[i]==')') {
                y->parenteses--;
            }
        }
    } else {
        y->parenteses = 1;
    }

    if(y->parenteses==0) {
        printf("Correta\n");
    } else {
        printf("Incorreta\n");
    }

    *x = y;
}


//PROGRAMA USANDO A TAD (main)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    expressao *expressao;

    char exp[1001];
    scanf("%s", exp);
    setExpress(&expressao, exp);
    verificador(&expressao);
    //printf("%s - %d - %d\n", expressao->expressao, expressao->parenteses, expressao->tamanho);
   
    free(expressao);
    return 0;
}