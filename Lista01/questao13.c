#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "questao13.h"

void input13(int *num){
    printf("Digite um numero: ");
    scanf("%d", num);
}

void questao13(void){
    int num;
    input(&num);
    (num%5==0) ? printf("E divisivel por 5") : printf("Nao e divisivel por 5");
}
