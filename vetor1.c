#include <stdio.h>
#include <locale.h>
#define TAM 5

int main() {
    setlocale(LC_ALL, "");
      //vetor [TAM];    
    int vetor[5];
    int i;
    
    //Solicitando dados para o usuário.
    printf("Digite os elementos do vetor:\n");
                //Ou[TAM] 
	for (i = 0; i < 5; i++){    	
    	printf("Elemento %d:", i + 1);
    	scanf("%d",&vetor[i]);
	}
    // Exibindo os  dados em um loço de repetição.
        printf("\nExibindo os elementos do vetor:\n");
               //Ou[TAM]     
	for(i = 0; i < 5; i++){
    	printf(" Elemento %d: %d\n", i+1, vetor[i]);
	}
	
	return 0;  
}
