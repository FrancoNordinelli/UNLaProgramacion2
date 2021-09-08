#include <stdio.h>
#include <stdlib.h>


//Realizar todos los mismos algoritmos pero para arrays de float o incluso de char
//Realizar la funcion que devuelve la moda del vector
//Realizar el procedimiento que carga un nuevo vector con la frecuenca de cada componente del vector inicial
//Realizar la fucion que devuelve el desvio standart (float) del vector.

void cargarVectorAleatorio(int v[], int t);
void ordenamientoBurbuja(int v[], int t);
void ordenamientoSeleccion(int v[], int t);
void ordenamientoPorInsercion(int v[], int t);
void mostrarVector(int v[], int t);
int main(int argc, char *argv[]) {
	int tam=10;
	int vector[10];
	printf (" Vector Desordenado \n");
	cargarVectorAleatorio(vector, tam);
	mostrarVector(vector, tam);
	printf ("\n Vector Ordenado \n");
	//ordenamientoBurbuja(vector, tam);
	//ordenamientoSeleccion(vector ,tam);
	ordenamientoPorInsercion(vector, tam);
	mostrarVector(vector, tam);
	return 0;
}
void cargarVectorAleatorio(int v[], int t){
	for (int i=0;i<10;i++){
		v[i]=1+rand()%10;
	}
}
void ordenamientoBurbuja(int v[], int t){
	int aux;
	for (int i=0;i<t;i++){
		for (int j=0; j<t-1;j++){
			if (v[j]<=v[j+1]){
				aux=v[j];
				v[j]=v[j+1];
				v[j+1]=aux;
			}
		}
	}
}
void ordenamientoSeleccion(int v[], int t){
	int min, tmp, i, j;
	for (i=0;i<t;i++){
		min=i;
		for (j=i+1;j<t;j++){
			if (v[min]<v[j]){
				min=j;
			}
		}
		tmp=v[min];
		v[min]=v[i];
		v[i]=tmp;
	}
}
void ordenamientoPorInsercion(int v[], int tam){
	int j,izq,der,aux, m;
	for (int i=0;i<tam;i++){
		aux=v[i];
		izq=0;der=i-1;
		while (izq<=der){
			m=(izq+der)/2;
			if (aux<v[m]){
				der=m-1;
			}
			else{
				izq=m+1;
			}
		}
		j=i-1;
		while (j>=izq){
			v[j+1]=v[j];
			j=j-1;
		}
		v[izq]=aux;
	}
}
void mostrarVector(int v[], int t){
	for (int i=0;i<t;i++){
		printf (" %d ", v[i]);
	}
}
