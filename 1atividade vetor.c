#include <stdio.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL, "");
        // variavel
    	int numero[3];
    
	numero[0] = 1;
    numero[1] = 2;
    numero[2] = 3;
    
    printf("\nElemento 0�: %d\n",numero[0]);
    printf("\nElemento 1�: %d\n",numero[1]);
    printf("\nElemento 2�: %d\n",numero[2]);
   
    return 0;	
}
