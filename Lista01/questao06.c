#include <stdio.h>
#include <stdlib.h>
#include "questao06.h"


void entradaQ06(float *valorAntigo, float *valorNovo){
    //entrada
    printf("Digite o valor antigo: ");
    scanf("%f", valorAntigo);
    printf("Digite o valor atual: ");
    scanf("%f", valorNovo);
};


void processamentoQ06(float *valorAntigo, float *valorNovo, float *aumento){
    //processamento
    *aumento = ((*valorNovo - *valorAntigo) / *valorAntigo)*100;

};

void saidaQ06(float aumento){
    printf("O aumeto foi de %.2f porcento\n", aumento);

};

void questao06(void){
    //declaracao
    float valorAntigo;
	float valorNovo;
	float aumento;

    ////entrada
    entradaQ06(&valorAntigo,&valorNovo);

    //processamento
    processamentoQ06(&valorAntigo,&valorNovo,&aumento);

    //saida
    saidaQ06(aumento);

};
