#include <stdio.h>
#include <locale.h>
#include <limits.h>
#define TAM 5

int main() {
    setlocale(LC_ALL, "");
    
     int numero[TAM], maiorNumero = INT_MIN, menorNumero = INT_MAX;
     int i;
    
    //Solicitando dados para o usuário.
    printf("Digite os números solicitadaas:\n");              
	for (i = 0; i < TAM; i++){    	
    	printf("Digite o %d: número", i + 1);
    	scanf("%d",&numero[i]);
	}
	
	if (numero[i] > maiorNumero){
		printf("Você tem o maior número!");
	} else if (numero[i] < menorNumero){
		printf("Você tem o menor número!");
    	}
    	
    	printf("\nExibindo os numeros informadas:\n");
    	for (i = 0; i < TAM; i++){    	
    	printf("%d: número; %i \n", i + 1, numero[i]);
		}
		
		printf("\nMaior número: %i \n", maiorNumero);
		printf("Menor número; %i \n", menorNumero);
		
		return 0;
}
