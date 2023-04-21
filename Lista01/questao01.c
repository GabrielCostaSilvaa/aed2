#include <stdio.h>
#include <stdlib.h>
#include "questao01.h"

void entrada (int *num1, int *num2){
    //entrada
    printf("Digite o primeiro numero: ");
    scanf("%d", num1);
    printf("Digite o segundo numero: ");
    scanf("%d", num2);

}

void processamento(int *num1, int *num2, int *saida){
    //processamento
    *saida = (*num1+ *num2)*3;

}

void saida(int saida){
    //saida
    printf("Resultado: %d", saida);

}

void questao01(void){
    //declaração e inicializacao
    int numero1;
    int numero2;
    int resultado;

    //entrada
    entrada(&numero1, &numero2);

    //processamento
    processamento(&numero1,&numero2,&resultado);

    //saida
    saida(resultado);

}
