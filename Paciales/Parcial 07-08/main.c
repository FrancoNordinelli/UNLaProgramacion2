#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PAISES 6
#define BIMESTRE 6
//PRE:El nombre junto con el apellido no puede tener más de 20 caracteres
//POST:Se guarda el nombre y apellido del usuario 
void cargarNombreDeUsuario(char nombreYApellido[20]);
//PRE:La contraseña no debe tener más de 20 caracteres y debe tener al menos 4 vocales y 2 dígitos
//POST:Si no cumple con los requisitos de PRE-condiciones, vuelve a pedir la contraseña hasta guardarla
void cargarContrasenia(char contrasenia[20]);
void mostrarNombreYApellido(char nombreYApellido[20]);
void mostrarContrasenia(char contrasenia[20]);
//PRE:La matriz tiene BIMESTRE(6) y PAISES(6) dimensiones
//POST:Se carga la matriz con numeros pares del 500 al 10000
void cargarMatrizAleatoriaParesSinRepetir(int m[BIMESTRE][PAISES]);
//PRE:Con la matriz ya cargada fue cargada con numeros entre 500 y 10000
//POST:Si encuentra un numero repetido, se lo cambia
int buscarEnMatriz(int m[BIMESTRE][PAISES], int num);
//PRE:Se cargó la matriz con numeros entre 500 y 10000 sin repetir
//POST:Se muestra la matriz
void mostrarMatrizPersonalizada(int m[BIMESTRE][PAISES]);
//PRE:La matriz fue cargada con aleatorios sin repetir entre 500 y 10000
//POST:Se guardan los elementos de la diagonal principal de la matriz
void cargarDiagonalPrincipal(int m[BIMESTRE][PAISES], int v[BIMESTRE]);
void mostrarDiagonal (int v[BIMESTRE]);
//PRE:La matriz está cargada con aleatorios. La frecuencia es la razón del numero buscado sobre la cantidad de números
//POST:Devuelve la frecuencia (Sólo puede ser 0.03 si aparece, o 0 sino)
float frecuenciaEnLaMatriz(int m[BIMESTRE][PAISES], int num, float frecuencia);
int main(int argc, char *argv[]) {
	printf ("------Examen de Franco Nordinelli. Soy tema 3-----\n\n");
	srand(time(0));
	char nomYApe[20];
	char cont[20];
	int numeroBusco;
	float frecuencia;
	int matriz[BIMESTRE][PAISES];
	int vector[BIMESTRE];
	cargarNombreDeUsuario(nomYApe);
	printf ("\n");
	//cargarContrasenia(cont);
	printf ("\n\n----Sus datos----\n");
	mostrarNombreYApellido(nomYApe);
	mostrarContrasenia(cont);
	printf ("\n");
	cargarMatrizAleatoriaParesSinRepetir(matriz);
	mostrarMatrizPersonalizada(matriz);
	cargarDiagonalPrincipal(matriz, vector);
	mostrarDiagonal (vector);
	frecuenciaEnLaMatriz(matriz, numeroBusco, frecuencia);
	return 0;
}
void cargarNombreDeUsuario(char nombreYApellido[20]){
	printf ("Ingrese su nombre y apellido: \n");
	fflush(stdin);
	gets(nombreYApellido);
}
//Si la contraseña se pone con 4 vocales y 2 dígitos la primera vez, pasa a la siguiente etapa. 
//Sino, vuelve a pedirla una y otra vez, aunque se haya escrito bien
/*void cargarContrasenia(char contrasenia[20]){
	int vocal=0;
	int num=0;
	printf ("Por favor, ingrese su contraseña. Debe tener al menos 4 vocales y dos números: \n");
	gets(contrasenia);
	for (int i=0;i<20;i++){
		if (contrasenia[i]=='a'||contrasenia[i]=='e'||contrasenia[i]=='i'||contrasenia[i]=='o'||contrasenia[i]=='u'){
			vocal++;
		}
		if (contrasenia[i]==0||contrasenia[i]==1||contrasenia[i]==2||contrasenia[i]==3||contrasenia[i]==4||contrasenia[i]==5||
		contrasenia[i]==6||contrasenia[i]==7||contrasenia[i]==8||contrasenia[i]==9){
			num++;
			}
		}	
	while (vocal<4||num<2){
		printf ("Por favor, ingrese su contraseña. Debe tener al menos 4 vocales y dos números: \n");
		gets(contrasenia);	
		}

}*/    
void mostrarNombreYApellido(char nombreYApellido[20]){
	printf ("\nSu usuario es: ");
		for (int i=0;i<20;i++){
		printf ("%c", nombreYApellido[i]);
	}
}
void mostrarContrasenia(char contrasenia[20]){
	printf ("\nSu contrasenia es: ");
		for (int i=0;i<20;i++){
		printf ("%c", contrasenia[i]);
	}
}
int buscarEnMatriz(int m[BIMESTRE][PAISES], int num){
    int pos = -1;
    int c,r;
    for (r=0; r<PAISES; r++){
       for (c=0; c<BIMESTRE; c++){
        if (m[r][c] == num){
            pos = m[r][c];
			}
		}
	}
    return pos;
}
void cargarMatrizAleatoriaParesSinRepetir(int m[BIMESTRE][PAISES]){
	int num = 0;
     	int resultadoBusqueda = 0;
     		for (int r=0; r<PAISES; r++){
        		for (int c=0; c<BIMESTRE; c++){
            do{
            num = (500+rand()%4499)*2; 
            resultadoBusqueda = buscarEnMatriz (m, num);
            }
			while (resultadoBusqueda != -1);
            m[r][c] = num;
		}
	}
}
void mostrarMatrizPersonalizada(int m[BIMESTRE][PAISES]){
		for (int r=0;r<PAISES;r++){
		for (int c=0;c<BIMESTRE;c++){
			printf (" %d ", m[c][r]);
		}
		printf ("\n");
	}
}
void cargarDiagonalPrincipal(int m[BIMESTRE][PAISES], int v[PAISES]){
	int r=0;
	int c=0;
	for (int i=0;i<BIMESTRE;i++){
		v[i]=m[c][r];
		c++;
		r++;
	}
}
void mostrarDiagonal (int v[BIMESTRE]){
	printf ("\n----DIAGONAL----\n");
    	for (int i = 0; i <BIMESTRE; i++){
			printf(" %d ", v[i]);
    }
}
float frecuenciaEnLaMatriz(int m[BIMESTRE][PAISES], int num, float frecuencia){
	frecuencia=0;
	printf ("\n\nIngrese el numero que desea buscar: \n");
	scanf ("%d", &num);
	for (int r=0;r<PAISES;r++){
		for (int c=0;c<BIMESTRE;c++){
			if (m[c][r]==num){
			frecuencia++;	
			}
		}
	}
	frecuencia=frecuencia/(PAISES*BIMESTRE);
	printf ("La frecuencia del %d es %.2f", num, frecuencia);
}
