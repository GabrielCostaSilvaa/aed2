#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "questao11.h"

void input(int *num){
    scanf("%d", num);
}

bool inbetween(int num){
    if(num>=100 && num<=500){
        return true;
    }
    else{
        return false;
    }
}

void questao11(void){
    int num;
    input(&num);
    (inbetween(num)) ? printf("Esta dentro do limite") : printf("Nao esta dentro do limite");
}
