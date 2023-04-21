#include <stdio.h>
#include <stdlib.h>
#include "questao02.h"


void entradaQ02(float *num1, float *num2, float *num3, float *num4){
    //entrada
    printf("Digite o 1o numero: ");
    scanf("%f", num1);
    printf("Digite o 2o numero: ");
    scanf("%f", num2);
    printf("Digite o 3o numero: ");
    scanf("%f", num3);
    printf("Digite o 4o numero: ");
    scanf("%f", num4);

};


void processamentoQ02(float *num1, float *num2, float *num3,float *num4,float *saida){
    //processamento
    *saida = (*num1+*num2+*num3+*num4)/4.0;

};

void saidaQ02(float saida){
    printf("A media e: %.2f\n", saida);

};

void questao02(void){
    //declaracao
    float numero1;
    float numero2;
    float numero3;
    float numero4;
    float resultado;


    ////entrada
    entradaQ02(&numero1,&numero2,&numero3,&numero4);

    //processamento
    processamentoQ02(&numero1,&numero2,&numero3,&numero4,&resultado);

    //saida
    saidaQ02(resultado);

};
