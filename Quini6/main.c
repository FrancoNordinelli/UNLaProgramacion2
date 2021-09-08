#include <stdio.h>
#include <stdlib.h>
#include "jugador.h"
#include "quini.h"
#define CANTNUM 6
#define RENGLON "\n\n-----------------\n\n"
int main()
{
    printf("----JUEGO QUINI 6------\n");
    Jugador j=crearJugador();
    printf("%s", RENGLON);
    mostrarJugador(j);
    /*FILE * archivo;
    archivo=fopen("Datos.txt", "a");
    fprintf(archivo, "\nNombre:%s", getNombre(j));
    fprintf(archivo,"\nNumeros: ");
    for(int i=0;i<CANTNUM;i++){
    fprintf(archivo, " -%d- ", getNumeros(j, i));
    }
    fclose(archivo);*/
    printf("%s", RENGLON);
    Quini q=crearQuini();
    mostrarQuini(q);
    printf("%s", RENGLON);
    juego(j,q);

    return 0;
}
