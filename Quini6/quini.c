#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "jugador.h"
#include "quini.h"
#define CANTBOLILLAS 45
#define CANTNUM 6
#define RENGLON "\n\n-----------------\n\n"

struct QuiniE{
    int bolillas[CANTBOLILLAS]
};

int buscarBolilla(Quini q, int num){
    int encontrado=-1;
    for(int i=0;i<CANTBOLILLAS;i++){
        if(q->bolillas[i]==num){
            encontrado=1;
        }
    }
    return encontrado;
}

Quini crearQuini(){
    Quini q=malloc(sizeof(struct QuiniE));
    int bolilla;
    for(int i=0;i<CANTBOLILLAS;i++){
        do{
            bolilla=rand()%46;
        }while(buscarBolilla(q,bolilla)==1);
        q->bolillas[i]=bolilla;
    }
}


void mostrarQuini(Quini q){
    for(int i=0;i<CANTBOLILLAS;i++){
        printf(" %d ", q->bolillas[i]);
    }
}

int comparaNumeros(Jugador j, Quini q){
    int encontrado=0;
    int cont=0;
    for(int i=0;i<CANTNUM;i++){
        do{
            if(getNumeros(j,i)==q->bolillas[cont]){
                encontrado=1;
                }
        cont++;
        }while(cont<6&&encontrado==0);
    }
    return encontrado;
}

void juego(Jugador j, Quini q){
    printf("%s", RENGLON);
    printf("\n--------PRIMER SORTEO----------\n");
    int contadorAciertos=0;
    int bandera=0;
    int k=0;
    for(int i=0;i<CANTNUM;i++){
        do{
        bandera=comparaNumeros(j,q);
            if(bandera==1){
            printf("Acerto!!!\n");
            contadorAciertos++;
            }
            k++;
        }while(k<6);
    }
    printf("%d", contadorAciertos);
}
