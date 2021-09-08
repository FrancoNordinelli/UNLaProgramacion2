#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Crear un programa que permita al usuario elegir el tamaño de dos vectores aleatorios (números enteros entre -50
y 50), una vez cargado ambos vectores, se pide calcular el promedio de los dos vectores y además se pide calcular
la suma de los vectores guardándolos en un tercer vector.
Todo debe realizarse con funciones y procedimientos evitando poner lógica en el main, solo llamado a funciones
y procedimientos o algún printf para mostrar algún resultado.
Las siguientes funciones y procedimientos NO PUEDEN FALTAR.
int elegirTamanio(); //El usuario elige el tamaño de los vectores
void cargarVectorAleatorio(int vector[], int tam);
void mostrarVector(int vector[], int tam);
float calcularPromedio(int vector[], int tam);
void cargarSuma( “CONSTRUIR POR EL ESTUDIANTE”);
Al compilar el código se debe ver por pantalla algo así:
El usuario eligió un tamaño de: 7
El primer vector es: 1 -4 5 3 1 11 1
El segundo vector es: 11 -41 5 3 1 1 1
El promedio del vector1 es: 6.43
El promedio del vector2 es: 13.56 //A modo de ejemplo
La suma de los dos vectores es: 12 -45 10 6 2 12 2*/
int elegirTamanio();
void cargarVectorAleatorio(int vector[], int vector2[], int tam);
void mostrarVector(int vector[], int vector2[], int tam);
float calcularPromedio(int vector[], int tam);
void cargarSuma (int vector3[], int vector2[], int vector[], int tam);
int main(int argc, char *argv[]) {
	srand(time(0));
	int tam=elegirTamanio();
	int sumadeVectores;
	int vector[tam];
	int vector2[tam];
	int vector3[tam];
	cargarVectorAleatorio(vector, vector2, tam);
	cargarSuma (vector3,vector2,vector, tam);
	printf("\n\n");
	printf ("El promedio del vector 1 es %.2f\n\n", calcularPromedio(vector, tam));
	printf ("El promedio del vector 2 es %.2f\n\n", calcularPromedio(vector2, tam));
	mostrarVector(vector, vector2, tam);
	return 0;
}
int elegirTamanio(){
	int tamanio;
	printf ("Ingrese el tamanio del vector: \n");
	scanf ("%d", & tamanio);
	return tamanio;
}
void cargarVectorAleatorio(int vector[],int vector2[], int tam){
	int i; 
	for (i=0;i<tam;i++){
		vector[i]=rand()%101-50;
			vector2[i]=rand()%101-50;
	}
}
void mostrarVector(int vector[], int vector2[], int tam){
	int i;
	for (i=0;i<tam;i++){
		printf ("  %d  ", vector[i]);	
	}
	printf ("\n\n");
	for (i=0;i<tam;i++){
		printf ("  %d  ", vector2[i]);	
	}
}
float calcularPromedio(int vector[], int tam){
	int i, sumavector=0;
	float prom=0;
	for (i=0;i<tam;i++){
		sumavector=sumavector+vector[i];
	}
	prom=sumavector/5;
	return prom;
}
float calcularPromedio2(int vector2[], int tam){
	int i,  sumavector=0;
	float prom2=0;
	for (i=0;i<tam;i++){
		sumavector=sumavector+vector2[i];
	}
	prom2=sumavector/tam;
	return prom2;
}
void cargarSuma (int vector3[], int vector2[], int vector[], int tam){
	int i;
	for (i=0;i<tam;i++){
		vector3[i]=vector2[i]+vector[i];
	}
	printf ("VALORES DEL VALORES 3 \n");
	for (i=0;i<tam;i++){
		printf ("  %d  ", vector3[i]);
	}
	printf ("\n");
}

