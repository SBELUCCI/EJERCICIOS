/*
 ============================================================================
 Name        : Ejercicio_b.c
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

	float sueldo;
	float aumento = 10;
	float valorAAumentar;
	float sueldoConAumento;

	printf ("Ingrese su sueldo:  ");
	scanf("%f", &sueldo);

	valorAAumentar = sueldo * (aumento / 100);
	sueldoConAumento = sueldo + valorAAumentar;

	printf ("Su sueldo con un aumento del 10%% es el siguiente: %.2f \n", sueldoConAumento);

}
