#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 10

void entradabubblesort(int numeros[]) {
    int i;
    printf("\nInsira 10 numeros para preencher o array, e pressione enter apas digitar cada um:\n");

    for (i = 0; i < TAMANHO; i++) {
        scanf("%d", &numeros[i]);
    }
    printf("Ordem atual dos itens no array:\n");

    for (i = 0; i < TAMANHO; i++) {
        printf("%4d ", numeros[i]);
    }
}

void processamentobubblesort(int numeros[]) {
    int contador, variavelaux, i;

    for (contador = 1; contador < TAMANHO; contador++) {
        for (i = 0; i < TAMANHO - 1; i++) {
            if (numeros[i] > numeros[i + 1]) {
                variavelaux = numeros[i];
                numeros[i] = numeros[i + 1];
                numeros[i + 1] = variavelaux;
            }
        }
    }
}

void saidabubblesort(int numeros[]) {
    int i;
    printf("\nElementos do array em ordem crescente com  bubblesort:\n");

    for (i = 0; i < TAMANHO; i++) {
        printf("%4d", numeros[i]);
    }
    printf("\n");
}

void bubblesort(void) {

    int num[TAMANHO];
    entradabubblesort(num);
    processamentobubblesort(num);
    saidabubblesort(num);

}
