#include <stdio.h>
#include <stdlib.h>
#include "questao07.h"


void entradaQ07(float *raio){
    //entrada
    printf("Digite o valor do raio: ");
    scanf("%f", raio);
};


void processamentoQ07(float *raio,float *perimetro,float *area, float *diametro,float *volume){
    //processamento
    float pi;
    pi = 3.14;
    *perimetro = 2 * pi * (*raio);
    *area = pi * (*raio) * (*raio);
    *diametro = 2 * (*raio);
    *volume = (4 * pi * ((*raio) * (*raio) * (*raio) ))/ 3;

};

void saidaQ07(float perimetro, float area, float diametro, float volume){
    printf("O perimetro e: %.2f \n", perimetro);
    printf("A area e: %.2f \n", area);
    printf("A diametro e: %.2f \n", diametro);
    printf("O volume e: %.2f \n", volume);

};

void questao07(void){
    //declaracao
    float raio;
    float perimetro;
    float area;
    float diametro;
	float pi;
	float volume;

    //entrada
    entradaQ07(&raio);

    //processamento
    processamentoQ07(&raio,&perimetro,&area,&diametro,&volume);

    //saida
    saidaQ07(perimetro,area,diametro,volume);

};
