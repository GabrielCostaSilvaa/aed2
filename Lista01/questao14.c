#include <stdio.h>
#include <stdlib.h>
#include "questao14.h"

void input14(int *num){
    printf("Digite um numero: ");
    scanf("%d", num);
}

void questao14(void){
    int num;
    input14(&num);
    (num%2==0) ? printf("E par") : printf("E impar");
}
