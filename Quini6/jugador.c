#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "jugador.h"
#define CANTNUM 6

struct JugadorE{
    char nombre[40];
    int numeros[CANTNUM];
};

int cargarNumerosPersonalizados(){
    int n=-1;
    while(n<0||n>45){
    printf("Ingrese un numero: ");
    scanf("%d", &n);
        if(n<0||n>45){
        printf("\nLos numeros deben ir del 0 al 45!!!\n");
        }
    }
    return n;
}

int cargarNumerosAleatorios(){
    int n=rand()%46;
    return n;
}

Jugador crearJugador(){
    Jugador j=malloc(sizeof(struct JugadorE));
    char aux[40];
    printf("Ingrese su nombre: ");
    fflush(stdin);
    gets(aux);
    strcpy(j->nombre,aux);
    int opcion; int cargaNum; int i=0;
    do{
        printf("\n1)Escoger mis propios numeros\n");
        printf("2)Jugar con numeros cargados al azar\n");
        scanf("%d", &opcion);
        if(opcion!=1&&opcion!=2){
            printf("Opcion invalida. Escoja nuevamente\n");
        }
    }while(opcion!=1&&opcion!=2);
    if(opcion==1){
        for(int i=0;i<CANTNUM;i++){
            do{
            cargaNum=cargarNumerosPersonalizados();
                if(buscarNumero(j,cargaNum)==1){
                printf("Los numeros no deben repetirse\n");
                }
            }while(buscarNumero(j,cargaNum)==1);
            j->numeros[i]=cargaNum;
        }
    }else{
    for(int i=0;i<CANTNUM;i++){
            do{
            cargaNum=cargarNumerosAleatorios();
            }while(buscarNumero(j,cargaNum)==1);
            j->numeros[i]=cargaNum;
        }
    }
    return j;
}

int buscarNumero(Jugador j, int numero){
    int bandera=-1;
    for(int i=0;i<CANTNUM;i++){
        if(j->numeros[i]==numero){
            bandera=1;
        }
    }
    return bandera;
}

void mostrarJugador(Jugador j){
    printf("Nombre: %s\n", j->nombre);
    printf("Numeros: ");
    for(int i=0;i<CANTNUM;i++){
        printf(" -%d- ", j->numeros[i]);
    }
}

char * getNombre(Jugador j){
    return j->nombre;
}

int * getNumeros(Jugador j, int i){
    return j->numeros[i];
}
