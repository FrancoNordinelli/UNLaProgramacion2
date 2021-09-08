#include <stdio.h>
#include <stdlib.h>
#include "fechas.h"

Fecha cargarFecha(){
	//COMO SE TRABAJA CON UN PUNTERO f, NO SE PUEDE TRABAJARLO SOLO DE FORMA LOCAL EN ESTA FUNCION.
	// malloc RESERVA LA MEMORIA QUE OCUPA f PARA TRABAJARLA DE FORMA DINÁMICA. 
	//¿CUÁNTA MEMORIA SE RESERVA? sizeof ES PARA DEFINIR LA CANTIDAD DE MEMORIA=MEMMORIA DE EstructuraFecha
	struct EstructuraFecha * f = malloc(sizeof(struct EstructuraFecha));
	
	f->dia=11;
	f->mes=2;
	f->anio=1999;
	
	return f;
}

void mostrarFecha(Fecha f){
	
	printf ("dia %d---mes %d---anio %d", f->dia, f->mes, f->anio);
	
}

Fecha cargarFechaPorParametros(int d, int m, int a){
	
	struct EstructuraFecha * f = malloc(sizeof(struct EstructuraFecha));
	
	f->dia=11;
	f->mes=1;
	f->anio=11111;
	
	return f;
}

Fecha cargarFechaPorTeclado(){
	struct EstructuraFecha * f = malloc(sizeof(struct EstructuraFecha));
	printf ("Ingrese el día: \n");
	scanf("%d", &f->dia);
	printf ("Ingrese el mes: \n");
	scanf("%d", &f->mes);
	printf("Ingrese el anio: \n");
	scanf("%d", &f->anio);
	return f;
}

int getDia(Fecha f){
	return f->dia;
}

int getMes(Fecha f){
	return f->mes;
}

int getAnio(Fecha f){
	return f->anio;
}

void setDia(Fecha f, int nuevoDia){
	f->dia=nuevoDia;
}

void setMes(Fecha f, int nuevoMes){
	f->mes=nuevoMes;
}
void setAnio(Fecha f, int nuevoAnio){
	f->anio=nuevoAnio;
}
