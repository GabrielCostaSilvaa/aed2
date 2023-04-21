#include <stdio.h>
#include <stdlib.h>
#include "questao16.h"

void input16(float *sal){
    printf("Digite o salario: ");
    scanf("%f", sal);
}

void calc(float sal, float *salLiq){
    *salLiq = (sal<2000.0) ? sal - (sal*0.1) : sal - (sal *0.2);
}

void questao16(void){
    float sal;
    float salLiq;

    input16(&sal);
    calc(sal, &salLiq);
    printf("O salario e: %f", salLiq);
}
