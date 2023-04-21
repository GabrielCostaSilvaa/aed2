#include <stdio.h>
#include <stdlib.h>
#include "questao08.h"


void entradaQ08(float *velocidade){
    //entrada
    printf("Digite o valor da velocidade: ");
    scanf("%f", velocidade);

};


void processamentoQ08(float *velocidade,float *velocidadeFinal){
    //processamento
    *velocidadeFinal = (*velocidade / 3.6);

};

void saidaQ08(float velocidadeFinal){
    printf("A velocidade em m/s e: %.2f \n", velocidadeFinal);

};

void questao08(void){
    //declaracao
    float velocidade;
	float velocidadeFinal;

    ////entrada
    entradaQ08(&velocidade);

    //processamento
    processamentoQ08(&velocidade,&velocidadeFinal);

    //saida
    saidaQ08(velocidadeFinal);

};
