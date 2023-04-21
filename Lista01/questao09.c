#include <stdio.h>
#include <stdlib.h>
#include "questao09.h"

void entrada09(int *n){
    printf("Digite um numero: ");
    scanf("%d", n);
}

void processamento09(int n, int *res){
      *res = (n > 100) ? 0 : 1;
}

void saida09(int n, int res){
    if(res == 0){
        printf("O numero digitado (%d) e maior do que 100.\n", n);
    } else {
        printf("O numero digitado (%d) nao e maior do que 100.\n", n);
    }
}

int questao09(){
    int numero;
    int resposta;

    entrada09(&numero);
    processamento09(numero, &resposta);
    saida09(numero, resposta);

}
