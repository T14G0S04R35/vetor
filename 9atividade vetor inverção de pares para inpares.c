#include <stdio.h>
#include <locale.h>
#include <limits.h>

#define TAM 6

int main() {
	setlocale (LC_ALL, "");
	
	int numeros[TAM], somaPositivos = 0;
	int i, quantodadeNegativos = 0;
	
	printf("=== Solicitando dados para o usuário === \n");     
	for(i = 0; i =TAM; i++){
		do{
			printf("Digite o %iº número: ", i+1);
			scanf("%i",&numeros[i]);
		}while (numeros[i] < 0 || numeros[i] % 2 == 1);
	}
	
	printf("\n=== Exibindo dados para o usuario na ordem na inversa === \n");
	for (i = TAM - 1; i >= 0; i--) {
		printf("%iº numero: %i \n", i+1, numeros[i]);
	}
	
	return 0;
}
