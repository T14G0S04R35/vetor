#include <stdio.h>
#include <locale.h>
#include <limits.h>
#define TAM 5

int main() {
    setlocale(LC_ALL, "");
    
     int numero[TAM], maiorNumero = INT_MIN, menorNumero = INT_MAX;
     int i;
    
    //Solicitando dados para o usu�rio.
    printf("Digite os n�meros solicitadaas:\n");              
	for (i = 0; i < TAM; i++){    	
    	printf("Digite o %d: n�mero", i + 1);
    	scanf("%d",&numero[i]);
	}
	
	if (numero[i] > maiorNumero){
		printf("Voc� tem o maior n�mero!");
	} else if (numero[i] < menorNumero){
		printf("Voc� tem o menor n�mero!");
    	}
    	
    	printf("\nExibindo os numeros informadas:\n");
    	for (i = 0; i < TAM; i++){    	
    	printf("%d: n�mero; %i \n", i + 1, numero[i]);
		}
		
		printf("\nMaior n�mero: %i \n", maiorNumero);
		printf("Menor n�mero; %i \n", menorNumero);
		
		return 0;
}
