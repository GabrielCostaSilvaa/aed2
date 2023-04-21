#include <stdio.h>
#include <stdlib.h>
#include "questao17.h"

void input17(float *num){
    printf("Digite o valor da compra: ");
    scanf("%f", num);
}

void calVenda(float num, float *valor){
    *valor = (num<200.0) ? num + (num*0.5) : num + (num*0.3);
}

void questao17(void){
    float num;
    float valor;

    input(&num);
    calVenda(num, &valor);
    printf("O valor da venda deve ser de %f", valor);
}
