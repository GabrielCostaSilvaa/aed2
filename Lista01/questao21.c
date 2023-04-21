#include<stdio.h>
#include<stdlib.h>
#include "questao21.h"


#include<stdio.h>
#include<stdlib.h>
#include "questao21.h"


void questao21(void){
    float numero1;
    float numero2;
    float numero3;
    float Maior;
    float Meio;
    float Menor;

    entrada21(&numero1, &numero2, &numero3);

    processamento21(&numero1, &numero2, &numero3, &Menor, &Meio, &Maior);

    saida21( &Menor, &Meio, &Maior);

}

void entrada21(float *n1, float *n2, float *n3){
    printf("Escreva o primeiro numero: ");
    scanf("%f", n1);
    printf("Escreva o segundo numero: ");
    scanf("%f", n2);
    printf("Escreva o terceiro numero: ");
    scanf("%f", n3);
}

void processamento21(float *n1, float *n2, float *n3, float *menor, float *meio, float *maior){
    *menor = 0;
    *meio = 0;
    *maior = 0;

    if(*n1 > *n2 && *n1 >*n3 && *n2>*n3){
        *menor = *n3;
        *meio = *n2;
        *maior = *n1;
    }
    else{
          if(*n1 > *n2 && *n1 >*n3 && *n3>*n2){
            *menor = *n2;
            *meio = *n3;
            *maior = *n1;
        }
        else{
             if(*n2 > *n1 && *n2 >*n3 && *n1>*n3){
                *menor = *n3;
                *meio = *n1;
                *maior = *n2;
            }
            else{
                if(*n1 > *n2 && *n1 >*n3 && *n3>*n1){
                    *menor = *n1;
                    *meio = *n3;
                    *maior = *n2;
            }
            else{
                 if(*n3 > *n1 && *n3 >*n2 && *n1>*n2){
                    *menor = *n2;
                    *meio = *n1;
                    *maior = *n3;
                }
                else{
                     if(*n3 > *n1 && *n3 >*n2 && *n2>*n1){
                        *menor = *n1;
                        *meio = *n2;
                        *maior = *n3;
                    }
                }

            }
        }
    }

  }
}

void saida21( float *menor, float *meio, float *maior){

printf("Os numeros em ordem crescente : %.2f, %.2f, %.2f \n ", *menor, *meio, *maior);

}
