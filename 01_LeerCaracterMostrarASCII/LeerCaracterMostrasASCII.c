#include <stdio.h>
#include <stdlib.h>

/*Programa en C que lea caracteres desde teclado mientras no se escriba un 0. Llama a una función que muestre el código ASCII del caracter.*/

int main() {
	
	
	char caracter; // Variable que almacena el carácter
	
	
	while(caracter != '0'){ //Mientras el carácter sea distinto a 0
	
	 printf("introduce un caracter, Escribe 0 para salir  \n");
	 
	 scanf(" %c", &caracter); // Scan carácter almacenar en &caracter
	 
		calculaAscii(caracter);	 //Llamar a la función que devuelve el código ASCII
	}
	
	
	return 0;
}

/*Función que muestra el código ASCII de un caracter recibido por parametr*/

void calculaAscii(char c){
	
	 printf(" Tiene  codigo ASCII: %d \n",c); 

}

