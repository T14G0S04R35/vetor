#include <stdio.h>
#include <locale.h>
#include <limits.h>
           
#define TAMANHO 10

int main() {
	setlocale (LC_ALL, "");
	float numeros[TAMANHO], somaPositivos = 0;
    int i, quantidadeNegativos = 0;
	
	 printf("=== Solicitando dados para o usu�rio === \n");
    for(i = 0; i = TAMANHO; i++){
     	printf("Digite o %d numero");
        scanf("%f",&numeros[i]);
     	  
     	if (numeros[i] < 0){
     		numeros[i] = 0;
		 }  
	}
	
		printf("\n=== Exidindo dados para o usu�rio"); 
	for (i = 0; i < TAMANHO; i++) {
		printf("%i� n�mero: %.lf \n",  i + 1, numeros[i]);
	}   
	
	return 0;
}
