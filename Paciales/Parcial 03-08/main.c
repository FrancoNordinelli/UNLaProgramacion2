#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define MESES 12
int elegirCantidadDeEmpresas();
void cargarNombreYApellido(char nombreYApellido[20]);
void crearContrasenia(char contrasenia[20], char nombreYAppelido[20]);
void mostrarContrasenia(char contrasenia[20]);
int elegirCantidadDeEmpresas();
void cargarMatrizAleatoria (float m[][MESES], int empresas);
void mostrarMatriz(float m[][MESES], int empresas);
void gananciaAnualPorEmpresas(float m[][MESES], int empresas, float v[]);
void gananciaTotalPorMeses(float m[][MESES], int empresas, float v[MESES]);
void mostrarVectorMensual(float v[], int c);
void mostrarVectorAnual(float v[], int empresas);
void encontrarMinimoMatriz(m[][MESES], int empresas, int pos);
int main(int argc, char *argv[]) {
	srand(time(0));
	char usuario[20];
	char cont[20];
	cargarNombreYApellido(usuario);
	crearContrasenia(cont, usuario);
	mostrarContrasenia(cont);
	int numEmpresas=elegirCantidadDeEmpresas();
	float m [numEmpresas][MESES];
	float gananciasAnuales[numEmpresas];
	float gananciasMensuales[MESES];
	cargarMatrizAleatoria (m, numEmpresas);
	mostrarMatriz(m, numEmpresas);
	gananciaAnualPorEmpresas(m, numEmpresas, gananciasAnuales);
	mostrarVectorAnual(gananciasAnuales, numEmpresas);
	gananciaTotalPorMeses(m, numEmpresas, gananciasMensuales);
	mostrarVectorMensual(gananciasMensuales, MESES);
	return 0;
}
void cargarNombreYApellido(char nombreYApellido[20]){
	printf ("Ingrese su nombre y apellido: \n");
	fflush(stdin);
	gets(nombreYApellido);
}
void crearContrasenia(char contrasenia[20], char nombreYApellido[20]){
	char X;
	for (int i=0;i<20;i++){
		if (nombreYApellido[i]=='a'||nombreYApellido[i]=='e'||nombreYApellido[i]=='i'||nombreYApellido[i]=='u'||nombreYApellido[i]=='o'){
		contrasenia[i]='X';
		}
	else{
		contrasenia[i]=nombreYApellido[i];
		}
	}
}
void mostrarContrasenia(char contrasenia[20]){
	for (int i=0;i<20;i++){
		printf ("%c", contrasenia[i]);
	}
}
int elegirCantidadDeEmpresas(){
	int cantidadEmpresas=0;
	do{
		printf ("\n\nIngrese la cantidad de empresas: \n");
		scanf ("%d", &cantidadEmpresas);
		if (cantidadEmpresas<3){
			printf ("\nEl numero debe ser mayor a tres");
		}
	}
	while (cantidadEmpresas<3);
	return cantidadEmpresas;
}
void cargarMatrizAleatoria (float m[][MESES], int empresas){
	for (int r=0;r<MESES;r++){
		for (int c=0;c<empresas;c++){
			m[c][r]=(float)(-10000+rand()%60001)/100;
		}
	}
}
void mostrarMatriz(float m[][MESES], int empresas){
		for (int r=0;r<MESES;r++){
		for (int c=0;c<empresas;c++){
			printf (" %.2f ",((float)m[c][r]));
		}
		printf ("\n");
	}
}
void gananciaAnualPorEmpresas(float m[][MESES], int empresas, float v[]){
	for (int i=0;i<empresas;i++){
		v[i]=0;
	}
	for (int r=0;r<MESES;r++){
		for (int c=0;c<empresas;c++){
			v[c]=v[c]+m[c][r];
		}
	}
}
void gananciaTotalPorMeses(float m[][MESES], int empresas, float v[MESES]){
	for (int r=0;r<MESES;r++){
		v[r]=0;
	}
	for (int r=0;r<MESES;r++){
		for (int c=0;c<empresas;c++){
			v[r]=v[r]+m[c][r];
		}
	}
}
void mostrarVectorMensual(float v[], int c){
	printf ("\n----Ganancias Mensuales----\n");
	for (int i=0;i<c;i++){
		printf ("  %.2f  ", v[i]);
	}
}
void mostrarVectorAnual(float v[], int empresas){
	printf ("\n----Ganancias Anuales----\n");
		for (int i=0;i<empresas;i++){
		 printf ("  %.2f  ", v[i]);
	}
}
void encontrarMinimoMatriz(m[][MESES], int empresas, int pos){
	pos=m[0][0];
	for (int r=0;r<MESES;r++){
		for (int c=0;c<empresas;c++){
			if (m[c][r]<pos)
		}
	}
}
