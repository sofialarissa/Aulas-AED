#include <stdio.h>

void binario (int num);

int main () {
    int num;

    scanf("%d", &num);
    binario(num);

    return 0;
}

void binario (int num) {

    if(num==1||num==0) {
        printf("%d", num);
    } else {
        binario(num/2); 
        int resto = num%2;
        printf("%d", resto);
    }
}

/*
if (num > 1) {
        binario(num / 2);
    }
    
    int resto = num % 2;
    printf("%d", resto);
*/