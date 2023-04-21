#include <stdio.h>
#include <stdlib.h>
#include "questao10.h"


void questao10(){
    int main(){
	//

	//declaracao
	char senha[10];
	char palavra[10] = "LINGUAGEMC";
	int comparacao;

    //entrada
    printf("Digite a Senha: ");
    scanf("%s", &senha);


    //processamento
    _Bool validacao(char s1[], char s2[]);

    //saida
        if (validacao(senha, palavra)){
    	printf("Senha valida\n");
	} else {
		printf("Senha invalida\n");
	}


    return 0;
}

_Bool validacao(char s1[], char s2[]){

	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'){
		++i;
	}
	if (s1[i] == '\0' && s2[i] == '\0'){
		return 1;
	} else {
		return 0;
	}
}
}
