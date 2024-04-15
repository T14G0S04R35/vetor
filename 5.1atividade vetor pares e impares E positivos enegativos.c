# include <stdio.h>
# include <locale.h>
# include <limits.h>
# define limite 5

int main() {
    setlocale(LC_ALL, "");
    
int i, positivo = 0, negativo = 0;
int pares = 0, impares = 0;
int numero[5]; 
    
  	for(i = 0; i < 5; i++){
    printf("Digite o número:", i+1);
    scanf("%i",&numero[i]); 
  
        if(numero[i] %2 == 0){
			pares ++; 
		} else {
			impares ++;
		}
        if(numero[i] < 0){
           negativo++;
		} else if(numero[i] > 0){
		   positivo++;
		}
	
    } 
    printf("Números pares: %i \n", pares);
    printf("Números impares: %i \n", impares);
    printf("Números positivos: %i \n", positivo);
    printf("Números negativos: %i \n", negativo);
    printf("Mostre o total de números inseridos: %i \n", i);
   
   return 0;
}
