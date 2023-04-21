#include <stdio.h>
#include <stdlib.h>
#include "questao20.h"

void input20(int *num1, int *num2, int *num3){
    printf("Digite o primeiro numero: ");
    scanf("%d", num1);
    printf("Digite o segundo numero: ");
    scanf("%d", num2);
    printf("Digite o terceiro numero: ");
    scanf("%d", num3);
}

void calcMaior(int num1, int num2, int num3){
    if (num1==num2 && num1==num3){
        printf("Numeros identicos");
    }
    else if(num1>num2 && num1>num3){
        printf("O maior e o numero %d", num1);
    }
    else if(num2>num3){
        printf("O maior e o numero %d", num2);
    }
    else{
        printf("O maior e o numero %d", num3);
    }
}

void questao20(void){
    int num1;
    int num2;
    int num3;

    input20(&num1,&num2,&num3);
    calcMaior(num1,num2,num3);
}
