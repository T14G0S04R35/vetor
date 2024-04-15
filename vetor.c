#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
	int numero[5];
    
	numero[0] = 1;
    numero[1] = 2;
    numero[2] = 3;
    numero[3] = 4;
    numero[4] = 5;
    
    printf("%i",numero[0]);     
    printf("%i",numero[1]);     
    printf("%i",numero[2]);     
    printf("%i",numero[3]);     
    printf("%i",numero[4]);   
    
    printf("\nElemento 0º: %d\n",numero[0]);
    printf("\nElemento 1º: %d\n",numero[1]);
    printf("\nElemento 2º: %d\n",numero[2]);
    printf("\nElemento 3º: %d\n",numero[3]);
    printf("\nElemento 4º: %d\n",numero[4]); 
	 
    return 0;
	}
