#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void cargarVector (float vector[], int tamanio);
void mostrarVector (float vector[], int tamanio);
int posicionMaximo (float vector[], int tamanio);
int promedioVector (float vector[], int tamanio);
int main(int argc, char *argv[]) {
	printf ("FRANCO NORDINELLI 37995141 TEMA 2\n\n");
	srand(time(0));
	int opcion;
	int tamanio=8;
	float vector[tamanio];
	do{
	printf ("-------------Ingrese una opcion----------- \n");
	printf ("1-Cargar un vector de 5 posiciones de números aleatorios enteros entre -70 y 70\n");
	printf ("2-Mostrar el vector\n");
	printf ("3-Ver la posicion del minimo del vector\n");
	printf ("4-Mostrar la suma de todos los numeros del vector\n");
	printf ("5-Salir\n");
	scanf ("%d", & opcion);
	switch (opcion){
		case 1: cargarVector(vector, tamanio);break;
		case 2: mostrarVector(vector, tamanio);break;
		case 3: printf ("La posicion del max es: %d \n\n", posicionMaximo (vector, tamanio));break;
		case 4: printf ("El promedio de los numeros es: %.2f \n\n", promedioVector(vector, tamanio)); break;
		default: printf("ingreso un valor sin opcion\n\n"); break;
	}
}
while (opcion!=5);
	return 0;
}
void cargarVector (float vector[], int tamanio){
	int i;
	for (i=0;i<tamanio;i++){
		printf ("Ingrese un valor para el vector: \n");
		scanf ("%f", &vector[i]);
	}
}
void mostrarVector (float vector[], int tamanio){
	int i;
	for (i=0;i<tamanio;i++){
		printf ("  %.2f  ", vector[i]);
	}
	printf ("\n\n");
}
int posicionMaximo (float vector[], int tamanio){
	int i;
	int max=0;
	int Pos=0;
	for (i=0;i<tamanio;i++){
		if (i==0){
			max=vector[i];
		}
		if (vector[i]>max){
			max=vector[i];
			Pos=i;
		}
	}
	return Pos+1;
}
int promedioVector (float vector[], int tamanio){
	int i=0, suma=0, prom=0;
	for (i=0;i<tamanio;i++){
		suma=suma+vector[i];
	}
	prom=suma/tamanio;
	return prom;
}
