#include <stdio.h>
#include "questao23.h"

void input23(float *percurso, char *tipo){
    printf("Digite o percurso em quilometros: ");
    scanf("%f", percurso);

    printf("Digite o tipo do carro (A, B ou C): ");
    scanf(" %c", tipo);
}

void definic(char tipo, float *percurso, float *consumo){
     switch (tipo) {
        case 'A':
            *consumo = *percurso / 8;
            printf("O consumo estimado de combustivel e de %.2f litros\n", *consumo);
            break;
        case 'B':
            *consumo = *percurso / 9;
            printf("O consumo estimado de combustivel e de %.2f litros\n", *consumo);
            break;
        case 'C':
            *consumo = *percurso / 12;
            printf("O consumo estimado de combustivel e de %.2f litros\n", *consumo);
            break;
        default:
            printf("Tipo de carro invalido.\n");
            break;
    }
}


void questao23(void) {
    float percurso, consumo;
    char tipo;

    input23(&percurso,&tipo);
    definic(tipo, &percurso, &consumo);
}
