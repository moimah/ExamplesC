#include <stdio.h>
#include <stdlib.h>

/*Programa en C que lea caracteres desde teclado mientras no se escriba un 0. Llama a una funci�n que muestre el c�digo ASCII del caracter.*/

int main() {
	
	
	char caracter; // Variable que almacena el car�cter
	
	
	while(caracter != '0'){ //Mientras el car�cter sea distinto a 0
	
	 printf("introduce un caracter, Escribe 0 para salir  \n");
	 
	 scanf(" %c", &caracter); // Scan car�cter almacenar en &caracter
	 
		calculaAscii(caracter);	 //Llamar a la funci�n que devuelve el c�digo ASCII
	}
	
	
	return 0;
}

/*Funci�n que muestra el c�digo ASCII de un caracter recibido por parametr*/

void calculaAscii(char c){
	
	 printf(" Tiene  codigo ASCII: %d \n",c); 

}

