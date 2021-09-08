#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct Temperaturas{
	int minima;
	int maxima;
	int fecha[2];
};
void cargarTemperaturas(struct Temperaturas t, int temperaturas[20]){
	for (int i=0;i<20;i++){
		temperaturas[i]=rand()%41;
		t.minima=temperaturas[0];
		t.maxima=temperaturas[0];
		printf ("----->%d\n", temperaturas[i]);
	}
	//Busco temperaturas máxima
	for (int i=0;i<20;i++){
		if (temperaturas[i]>t.maxima){
			t.maxima=temperaturas[i];
			t.fecha[1]=i;
		}
	}
	//Busco temperaturas mínima
		for (int i=0;i<20;i++){
		if (temperaturas[i]<t.minima){
			t.minima=temperaturas[i];
			t.fecha[0]=i;
		}
	}
	printf ("\nLa temperatura minima es %d------>Fecha %d", t.minima, t.fecha[0]);
	printf ("\n\nLa temperatura maxima es %d----->Fecha %d \n\n", t.maxima, t.fecha[1]);
}

int main(int argc, char *argv[]) {
	srand(time(0));
	struct Temperaturas temp;
	int vectorTemperaturas[20];
	printf ("-----TEMPERATURAS-----\n\n");
	cargarTemperaturas(temp, vectorTemperaturas);
	return 0;
}
