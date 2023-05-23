#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAMANHO 10

void entradamergesort(int *v){
    int i;
    printf("\nEntre com 10 numeros:\n");
    for (i = 0; i < TAMANHO; i++) {
        scanf("%d", &v[i]);
    }
}
void merge(int *V, int inicio, int meio, int fim){
    int *temp, p1, p2, tamanho, i, j, k;
    int fim1 = 0, fim2 = 0;
    tamanho = fim-inicio+1;
    p1 = inicio;
    p2 = meio+1;
    temp = (int *) malloc(tamanho*sizeof(int));
    if(temp != NULL){
        for(i=0; i<tamanho; i++){
            if(!fim1 && !fim2){
                if(V[p1] < V[p2])
                    temp[i]=V[p1++];
                else
                    temp[i]=V[p2++];

                if(p1>meio) fim1=1;
                if(p2>fim) fim2=1;
            }else{
                if(!fim1)
                    temp[i]=V[p1++];
                else
                    temp[i]=V[p2++];
            }
        }
        for(j=0, k=inicio; j<tamanho; j++, k++)
            V[k]=temp[j];
    }
    free(temp);
}
void mergesort(int *V, int inicio, int fim){
    int meio;
    if(inicio < fim){
        meio = floor((inicio+fim)/2);
        mergesort(V,inicio,meio);
        mergesort(V,meio+1,fim);
        merge(V,inicio,meio,fim);
    }
}
void saidamergesort(int *V, int tamanho){
    int i;
    printf("A lista ordenada por mergesort: ");
    for(i = 0; i < tamanho; i++) {
        printf("%d ", V[i]);
   }
}
void MergeSort(void){
    int numero[TAMANHO], inic = 0, M = TAMANHO / 2, F = TAMANHO - 1;
    entradamergesort(numero);
    mergesort(numero, inic, F);
    saidamergesort(numero, TAMANHO);
}
