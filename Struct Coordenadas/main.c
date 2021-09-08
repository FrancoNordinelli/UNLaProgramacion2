#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Crear una estructura que represente un punto en la plano x e y. 
Además, crear una estructura que represente un vector (matemático) compuesta de dos estructuras punto. 
Se pide, crear una función que reciba dos puntos y calcule la distancia entre los mismos. 
Además, generar la ecuación de la recta que pasa por estos dos puntos y mostrarla por pantalla por medio de un procedimiento.*/
struct Eje{
	float x;
	float y;
};
struct Eje2{
	struct Eje punto1, punto2;
};
int distancia(struct Eje2 puntos, struct Eje p){
	printf ("\nValor de X en Punto 1: ");
	scanf("%f", &puntos.punto1.x);
	printf ("\nValor de Y en Punto 1: ");
	scanf("%f", &puntos.punto1.y);
	printf ("\nValor de X en punto 2: ");
	scanf("%f", &puntos.punto2.x);
	printf ("\nValor de Y en punto 2: ");
	scanf ("%f", &puntos.punto2.y);
	float distancia=sqrt(pow(puntos.punto1.x-puntos.punto2.x, 2)+pow(puntos.punto1.y-puntos.punto2.y, 2));
	return distancia;
}
void recta(){
	
}
int main(int argc, char *argv[]) {
	struct Eje xy;
	struct Eje2 puntos;
	distancia(puntos, xy);
	return 0;
}
