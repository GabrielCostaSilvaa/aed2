#include <stdio.h>
#include <stdlib.h>
#include "questao04.h"


void entradaQ04(float *num1, float *num2){
    //entrada
    printf("Digite seu salario inicial: ");
    scanf("%f", num1);
    printf("Digite a a porcentagem de aumento: ");
    scanf("%f", num2);
};


void processamentoQ04(float *num1, float *num2, float *saida){
    //processamento
    *saida = *num1 + ((*num1 * (*num2)) / 100);

};

void saidaQ04(float saida){
    printf("O novo salario e: %.2f\n", saida);

};

void questao04(void){
    //declaracao
    float salario;
	float aumento;
	float salarioN;
	salarioN = 0;

    ////entrada
    entradaQ04(&salario,&aumento);

    //processamento
    processamentoQ04(&salario,&aumento,&salarioN);

    //saida
    saidaQ04(salarioN);

};
