#include <stdio.h>
#include <stdlib.h>
#include "questao18.h"

void input18(int *num1, int *num2){
    printf("Digite uma unidade: ");
    scanf("%d", num1);
    printf("Digite a segunda unidade: ");
    scanf("%d", num2);
}
void calcMediaUni(int num1, int num2, int *resultado){
    *resultado  = (num1 + num2)/ 2;
}

void resultSituac(resultado){
    if(resultado<3){
        printf("reprovado");
    }
    else if(resultado>3 && resultado<7){
        printf("prova final");
    }
    else
    {printf("aprovado");}
}

void questao18(void){
    int num1;
    int num2;
    int resultado;

    input18(&num1, &num2);
    calcMediaUni(num1, num2, &resultado);
    resultSituac(resultado);
}
