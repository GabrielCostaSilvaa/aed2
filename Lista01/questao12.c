#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "questao12.h"


void input12(int *nota1, int *nota2){
    printf("Digite a nota 1: ");
    scanf("%d", nota1);
    printf("Digite a nota 2: ");
    scanf("%d", nota2);
}

bool calcMedia(int nota1, int nota2){
   return (((nota1 + nota2)/2)>=7);
}

void questao12(void){
    int nota1;
    int nota2;

    input12(&nota1, &nota2);
    (calcMedia(nota1, nota2)) ? printf("Aprovado") : printf("Reprovado");

}
