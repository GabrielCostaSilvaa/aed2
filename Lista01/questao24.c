#include <stdio.h>
#include "questao24.h"

void input24(int *vlCompr, int *vlPag){
    printf("Digite o valor do pagamento: ");
    scanf("%d", vlPag);
    printf("Digite o valor da compra: ");
    scanf("%d", vlCompr);
}

void calc24(int vlCompr, int vlPag){
    int troco;
    int notas_100;
    int notas_10;
    int notas_1;

    if(vlPag<vlCompr){
        printf("Pagamento Negado");
    }else{
        troco = vlPag-vlCompr;
        printf("O troco e de %d\n", troco);
        notas_100 = troco/100;
        troco = troco % 100;
        notas_10 = troco/10;
        troco = troco%10;
        notas_1 = troco/1;
        printf("%d notas de 100, %d notas de 10 e %d notas de 1", notas_100, notas_10, notas_1);
        }
}

void questao24(void){
    int vlPag;
    int vlCompr;

    input24(&vlCompr,&vlPag);
    calc24(vlCompr,vlPag);
}



