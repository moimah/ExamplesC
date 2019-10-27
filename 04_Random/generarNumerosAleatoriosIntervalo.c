#include <stdio.h>
#include <stdlib.h>

/*Generar un número aleatorio entre un intervalo de 100 a 200
al introducir un texto por pantalla */

int main () {
 
 
	char entrada[30];
	
	printf("Introduce texto: ");
	
	scanf("%s", entrada); // Escribimos un texto
	while(entrada!='\0'){

	 int nRandonNumber = rand()%((201)-100) + 100; //Generamos un número aleatorio int nRandonNumber = rand()%((nMax+1)-nMin) + nMin;

      printf("%d\n", nRandonNumber);  
      printf("Introduce texto: ");
      
    scanf("%s", entrada); // Escribimos un texto
      
	}

   
   
   
   return(0);
}
