#include <stdio.h>
#include <locale.h>
#include <limits.h>
           
#define TAMANHO 10

int main() {
	setlocale (LC_ALL, "");
	
float numeros[TAMANHO], somaPositivos = 0;
int i, quantidadeNegativos = 0;

     printf("=== Solicitando dados para o usuário === \n");
    for(i = 0; i = TAMANHO; i++){
     	printf("Digite o %d numero");
        scanf("%f",&numeros[i]);
     	  
    	if(numeros[i] < 0){
           quantidadeNegativos++;
		} else if (numeros[i] > 0) {
	       somaPositivos += numeros[i];
		}
	}
	
	printf("\n=== Exidindo dados para o usuário"); 
	for (i = 0; i < TAMANHO; i++) {
		printf("%iº número: %.lf \n", somaPositivos);
	}   
	
	printf("\nQuantidade de números negativos: %i \n", quantidadeNegativos);
	printf("Soma de números positivos: %.1f \n", somaPositivos);
	
	return 0;
}
