#include <stdio.h>
#include <stdlib.h>
#include "questao05.h"

void entradaQuestao05(float *salario, int *qDependentes) {
    printf("Digite o salario base: ");
    scanf("%f", salario);
    printf("Digite a quantidade de dependentes: ");
    scanf("%d", qDependentes);

}

void processamentoQuestao05(float *salario, float *salarioBruto, int *qDependentes){
    *salarioBruto = *salario + (*qDependentes * 32);
    *salarioBruto = *salarioBruto - (*salarioBruto *27.5 /100);

}

void saidaQuestao05(float saidaQuestao05){
    printf("\n Valor do salario após desconto do imposto de renda e adicional por dependente: R$ %.2f", saidaQuestao05);
}

void questao05(void) {
    float salarioBase, salarioBruto;
    int dependentes;

    entradaQuestao05(&salarioBase, &dependentes);

    processamentoQuestao05(&salarioBase, &salarioBruto, &dependentes);

    saidaQuestao05(salarioBruto);

}
