/*
 ============================================================================
 Name        : Ejercicio_c.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int edad;
	char estadoCivil;

	printf ("Ingrese su edad: ");
	scanf ("%d", &edad);

	printf ("Ingrese su estado civil ('c'-casado, 's'-soltero, 'v'-viudo, 'd'-divorciado): ");
	fflush(stdin);
	scanf ("%c", &estadoCivil);


	printf ("Usted ingresó la siguiente edad: %d \n ", edad);
	printf ("Usted ingresó el siguiente estado civil: %c \n", estadoCivil);

	if(edad<18 && estadoCivil != "s"){

		printf ("Es muy pequeño para NO ser soltero \n");
	}


	return 0;
}
