#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 10

void entradaselectionsort(int numeros[]) {
    int i;
    printf("\nEntre com dez numeros para preencher a lista e pressione enter apos digitar cada um:\n");

    for (i = 0; i < TAMANHO; i++) {
        scanf("%d", &numeros[i]);
    }
    printf("Lista em ordem original:\n");

    for (i = 0; i < TAMANHO; i++) {
        printf("%4d ", numeros[i]);
    }
}

void processamentoselectionsort(int numeros[]) {
    int i,j, variavelaux, Menor;

    for(int i=0;i<TAMANHO-1;i++){
        Menor=i;
        for(int j=i+1 ; j<TAMANHO ; j++){
            if(numeros[Menor] > numeros[j])
                Menor=j;
        }
        if(i!=Menor){
            variavelaux=numeros[i];
            numeros[i]=numeros[Menor];
            numeros[Menor]=variavelaux;
        }
    }
}

void saidaselectionsort(int numeros[]) {
    int i;
    printf("\nLista em ordem crescente com selectionsort:\n");

    for (i = 0; i < TAMANHO; i++) {
        printf("%4d", numeros[i]);
    }
    printf("\n");
}
void selectionsort(void) {
    int num[TAMANHO];
    entradaselectionsort(num);
    processamentoselectionsort(num);
    saidaselectionsort(num);
}
