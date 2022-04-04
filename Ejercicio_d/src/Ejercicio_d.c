/*
 ============================================================================
 Name        : Ejercicio_d.c
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

	int numeroUsuario;


	printf("Ingrese un numero:  ");
	scanf ("%d", &numeroUsuario);

	if(numeroUsuario % 2 == 0) {
		printf ("El numero ingresado es par");
	} else {
		printf ("El numero ingresado es impar");
	}


	return 0;
}
