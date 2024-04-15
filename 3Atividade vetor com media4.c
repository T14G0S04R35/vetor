#include <stdio.h>
#include <locale.h>
#define TAM 4

int main() {
    setlocale(LC_ALL, "");
    
    int i;
    float notas [TAM], soma = 0, media; 
    
    
      printf("Digite as três notas:\n");
                //Ou[TAM] 
	for (i = 0; i < TAM; i++){    	
    	printf("Digite a %d nota:", i + 1);
    	scanf("%f",&notas[i]);

    	soma += notas[i];
	}
	
	media += soma / (float) TAM;
	
    // Exibindo os  dados em um loço de repetição.
        printf("\nExibindo as notas informadas:\n");
               //Ou[TAM]     
	for(i = 0; i < TAM; i++){
    	printf("%dº nota: %.1f\n", i+1, notas[i]);
	}
	
	printf("\nMédia: %.1f \n", media);
	
	if(media >= 7){
		printf("Situação: Aprovado");
	} else if  (media >= 5){
		printf("Situação: Recuperaçao");
	} else if (media < 5){
		printf("Situação: Reprovado");
	}
	

	  return 0;
	}
