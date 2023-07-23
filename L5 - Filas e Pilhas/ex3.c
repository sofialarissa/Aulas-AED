//ARQUIVO .h
typedef struct trem {
    int *vagao;
    int nVagoes;
} trem;


//ARQUIVO .c
#include <stdio.h>
#include <stdlib.h>

/*criar um trem*/
void setTrem(trem *trem) {
    int i;

    scanf("%d", &trem->nVagoes);
    for(i=0; i<trem->nVagoes; i++) {
        scanf("%d", &trem->vagao[i]);
    }
}

/*verificar se os vagões estão em ordem decrescente*/
int verificador(trem *trem) {
    int i;

    for(i=0; i<trem->nVagoes; i++) {
        if(trem->vagao[i]<trem->vagao[i+1]) {
            return 1;
        } 
    }

    return 0;
}


//PROGRAMA USANDO A TAD (main)
#include <stdio.h>
#include <stdlib.h>

int main() {
    trem *trem = malloc(sizeof(trem));
    setTrem(trem);

    if(verificador(trem)==0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}