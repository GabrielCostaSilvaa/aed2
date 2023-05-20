#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 10

int trocas=0;
int comp=0;

void entradainsertionsort(int numeros[]) {
    int i;
    printf("\nInsira dez numeros para preencher a lista e pressione enter apos digitar cada um:\n");
    for (i = 0; i < TAMANHO; i++) {
        scanf("%d", &numeros[i]);
    }
    printf("Lista em ordem original:\n");

    for (i = 0; i < TAMANHO; i++) {
        printf("%4d ", numeros[i]);
    }
}

void processamentoinsertionsort(int numeros[]) {
    int i,j, variavelaux;

    for(i=0; i<TAMANHO-1; i++) {
      	comp++;
        if(numeros[i]>numeros[i+1]) {
           variavelaux=numeros[i+1];
           numeros[i+1]=numeros[i];
		   numeros[i]=variavelaux;
           j=i-1;
           trocas++;
           while(j>=0){
		   	  comp++;
		   	  if(variavelaux<numeros[j]){
                 numeros[j+1]=numeros[j];
		         numeros[j]=variavelaux;
			     trocas++;
			  } else {
			  	 break;
			  }
			  j=j-1;
		   }
        }
    }
}

void saidainsertionsort(int numeros[]) {
    int i;
    printf("\nLista em ordem crescente com insertionsort:\n");

    for (i = 0; i < TAMANHO; i++) {
        printf("%4d", numeros[i]);
    }
    printf("\n");
}

void insertionsort(void) {
    int num[TAMANHO];
    entradainsertionsort(num);
    processamentoinsertionsort(num);
    saidainsertionsort(num);
}
