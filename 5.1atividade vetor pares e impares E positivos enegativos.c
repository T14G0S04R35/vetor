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
    printf("Digite o n�mero:", i+1);
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
    printf("N�meros pares: %i \n", pares);
    printf("N�meros impares: %i \n", impares);
    printf("N�meros positivos: %i \n", positivo);
    printf("N�meros negativos: %i \n", negativo);
    printf("Mostre o total de n�meros inseridos: %i \n", i);
   
   return 0;
}
