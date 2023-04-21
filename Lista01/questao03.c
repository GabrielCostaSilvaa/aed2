#include <stdio.h>
#include <stdlib.h>
#include "questao03.h"


void entradaQ03(float *nota1, float *nota2, float *peso1, float *peso2){
    //entrada
    printf("Digite a 1o nota : ");
    scanf("%f", nota1);
    printf("Digite a 2o nota: ");
    scanf("%f", nota2);
    printf("Digite o peso a 1o nota: ");
    scanf("%f", peso1);
    printf("Digite o peso a 2o nota: ");
    scanf("%f", peso2);

};


void processamentoQ03(float *nota1, float *nota2, float *peso1, float *peso2, float *resultado){
    //processamento
    *resultado = (*nota1 * (*peso1) + *nota2 * (*peso2)) / ((*peso1) + (*peso2));

};

void saidaQ03(float resultado){
    printf("A media e: %.2f\n", resultado);

};

void questao03(void){
    //declaracao
    float nota1;
    float nota2;
    float peso1;
    float peso2;
    float resultado;


    ////entrada
    entradaQ03(&nota1, &nota2, &peso1, &peso2);

    //processamento
    processamentoQ03(&nota1, &nota2, &peso1, &peso2, &resultado);

    //saida
    saidaQ03(resultado);

};
