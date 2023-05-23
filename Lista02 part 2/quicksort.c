#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAMANHO 10

void entradaquicksort(int *V){
    int i;

    printf("\nEntre com 10 numeros:\n");

    for (i = 0; i < TAMANHO; i++) {
        scanf("%d", &V[i]);
    }
    printf("\n");
}
int divide(int *V, int inicio, int final){
    int esq, dir, pivo, variavelaux;
    esq = inicio;
    dir = final;
    pivo = V[inicio];
    while(esq < dir){
        while(esq <= final && V[esq] <= pivo)
            esq++;

        while(dir >= 0 && V[dir] > pivo)
            dir--;

        if(esq < dir){
            variavelaux = V[esq];
            V[esq] = V[dir];
            V[dir] = variavelaux;
        }
    }
    V[inicio] = V[dir];
    V[dir] = pivo;
    return dir;
}
void quicksort(int *V, int inicio, int fim) {
    int pivo;
    if(fim > inicio){
        pivo = divide(V, inicio, fim);
        quicksort(V, inicio, pivo-1);
        quicksort(V, pivo+1, fim);
    }
}
void saidaquicksort(int *V, int inicio, int fim){
    printf("Lista ordenada por quicksort: ");
    for (int i = inicio; i <= fim; i++) {
        printf("%d ", V[i]);
    }
}
void QuickSort(void){
    int vet[TAMANHO];
    int N = TAMANHO;

    entradaquicksort(vet);

    quicksort(vet, 0, N-1);

    saidaquicksort(vet, 0, N-1);
}
