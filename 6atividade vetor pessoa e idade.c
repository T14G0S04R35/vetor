#include <stdio.h>
#include <locale.h>
      //TAM
#define TAMANHO 5
int main() {
    setlocale(LC_ALL, "");
    // variaveo
    char nome[TAMANHO][200];
    int idade[TAMANHO];
    int i;
    
    for(i = 0; i < TAMANHO; i++){
    	printf("Digite um nome: ");
    		scanf("%s",&nome[i]);
		printf("Digite uma idade: ");   
			scanf("%i",&idade[i]);
			printf("\n");
	}
	system("cls || clear");
    
    for(i = 0; i < TAMANHO; i++){
    	printf("%iº nome: %s \n", i + 1,nome[i]);
    	printf("%iº idade: %i anos \n", i + 1, idade[i]);
    	printf("\n");
	}
    return 0;
	}
