#include <stdio.h>
#include <locale.h>
#define TAM 3

int main() {
    setlocale(LC_ALL, "");
    
       //vetor [TAM];    
    float notas[TAM], soma = 0, media;
    int i;
    
    //Solicitando dados para o usu�rio.
    printf("Digite as tr�s notas:\n");
                //Ou[TAM] 
	for (i = 0; i < TAM; i++){    	
    	printf("Digite a %d nota:", i + 1);
    	scanf("%f",&notas[i]);

    	soma += notas[i];
	}
	
	media += soma / (float) TAM;
	
    // Exibindo os  dados em um lo�o de repeti��o.
        printf("\nExibindo as notas informadas:\n");
               //Ou[TAM]     
	for(i = 0; i < TAM; i++){
    	printf("%d� nota: %.1f\n", i+1, notas[i]);
	}
	
printf("\nM�dia: %.1f \n", media);
	  return 0;
	}
