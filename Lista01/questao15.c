#include <stdio.h>
#include <stdlib.h>
#include "questao15.h"

void input15(int *num1, int *num2){
    printf("Digite um numero: ");
    scanf("%d", num1);
    printf("Digite outro numero: ");
    scanf("%d", num2);
}

void questao15(void){
    int num1;
    int num2;
    input15(&num1, &num2);
    (num1> num2) ? printf("Numero %d maior que numero %d", num1, num2) : printf("Numero %d maior que numero %d", num2, num1);
}
