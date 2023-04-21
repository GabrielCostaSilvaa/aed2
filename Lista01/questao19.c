#include <stdio.h>
#include <stdlib.h>
#include "questao19.h"

void input19(int *num1, int *num2, int *num3){
    printf("Digite o primeiro lado: ");
    scanf("%d", num1);
    printf("Digite o segundo lado: ");
    scanf("%d", num2);
    printf("Digite o terceiro lado: ");
    scanf("%d", num3);
}

void determinador(int num1, int num2, int num3){
    if (num1==num2 && num1==num3){
        printf("e equilatero");
    }
    else if(num1==num2 && num1!=num3 || num1!=num2 && num1==num3 ){
        printf("e isosceles");
    }
    else{
        printf("e escaleno");
    }
}

void questao19(void){
    int num1;
    int num2;
    int num3;

    input19(&num1,&num2,&num3);
    determinador(num1,num2,num3);
}
