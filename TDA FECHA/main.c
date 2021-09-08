#include <stdio.h>
#include <stdlib.h>
#include "fechas.h"

int main(int argc, char *argv[]) {
	
	printf ("\n  TDA PASO 1\n\n");
	
	Fecha fecha1 = cargarFecha();
	/*mostrarFecha(fecha1);
	
	Fecha fecha2, fecha3;
	int dia, mes, anio;
	
	printf ("\n\n");
	
	fecha2 = cargarFechaPorParametros(dia,mes,anio);
	mostrarFecha(fecha2);
	
	printf ("\n\n");
	
	fecha3 = cargarFechaPorTeclado();
	mostrarFecha(fecha3);*/
	
	printf ("\nTDA PASO 2\n\n");
	
	printf ("DIA %d", getDia(fecha1));
	
	setDia(fecha1,8);
	
	printf("\nDia %d", getDia(fecha1));
	return 0;
}
