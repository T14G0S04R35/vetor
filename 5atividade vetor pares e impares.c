#include <stdio.h>
#include <locale.h>
#include <limits.h>

#define TAM 5

int main() {
	setlocale (LC_ALL, "");

    int numeros[TAM];
    int pares = 0, impares = 0 ;
    int i;

    for(i = 0; i < TAM; i++){
    	printf("Digite um numero: ", i + 1, numeros[i]);
    	scanf("%i",&numeros[i]);
    	
		if(numeros[i] %2 == 0){
			pares ++; 
		} else {
			impares ++;
		}
	} 
	 
	 printf("numeros pares: %i", pares);
	 printf("números impares: %i", impares);
	 
}
