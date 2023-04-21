#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "questao22.h"

void input22(int *qtdEleitores, int *qtdVotos, char **nomeMunic){
    printf("Digite a quantidade de eleitores: ");
    scanf("%d", qtdEleitores);
    printf("Digite a quantidade de votos do primeiro colocado: ");
    scanf("%d", qtdVotos);
    printf("Digite o nome do municipio: ");
    scanf("%s", nomeMunic);
}

void deterSegundTurn(int qtdEleitores, int qtdVotos, char **nomeMunic){
    if(qtdEleitores<200000 || qtdVotos>(qtdEleitores/2)){
        printf("Nao tera segundo turno na cidade %s", nomeMunic);
    }
    else{
        printf("A cidade %s tera segundo turno", nomeMunic);
    }
}

void questao22(void){
    int qtdEleitores;
    int qtdVotos;
    char nomeMunic[50];

    input22(&qtdEleitores, &qtdVotos,&nomeMunic);
    deterSegundTurn(qtdEleitores, qtdVotos, &nomeMunic);
}
