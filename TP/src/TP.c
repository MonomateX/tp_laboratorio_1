/*
 ============================================================================
 Name        : TP.c
 Author      : Piuca Ricardo 1°C
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Menu.h"
#include "Calculos.h"
#define T 0

int main(void) {
	int opcion;
	eNumeros operacion = {T,T,T,T,T,T,T,T,T};

	setbuf(stdout, NULL);

	do
	{
		opcion = MostrarMenu(operacion);
	    operacion = EjecutarOpcion(operacion, opcion);
	}while(opcion != 5);

	return EXIT_SUCCESS;
}
