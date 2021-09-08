#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "empleados.h"
#include "empresa.h"
#define CANTIDAD 5

struct EmpleadoE{
    char nombre[40];
    char apellido[40];
    int edad;
    int sueldo;
};

Empleado crearEmpleado(char nom[], char ape[], int ed){

    Empleado e=malloc(sizeof(struct EmpleadoE));
    e->edad=ed;
    e->sueldo=(ed*30)+50000;
    strcpy(e->nombre,nom);
    strcpy(e->apellido,ape);

    return e;
}

void mostrarEmpleado(Empleado e){
    printf("\nNombre: %s", e->nombre);
    printf("\nApellido: %s", e->apellido);
    printf("\nEdad: %d", e->edad);
    printf("\nSueldo: %d\n", e->sueldo);

}

int iniciarCargaEmpleados(){
    Empleado e=malloc(sizeof(struct EmpleadoE));
    strcpy(e->apellido," ");
    strcpy(e->nombre," ");
    e->edad=0;
    e->sueldo=0;
    return e;
}

int getEdad(Empleado e){
    return e->edad;
}

void ordenamientoSeleccion(Empleado e[]){
    int min, tmp;
    for(int i=0;i<CANTIDAD;i++){
        min=i;
        for(int j=i+1;j<CANTIDAD;j++){
            if(e[min]->sueldo>e[j]->sueldo){
                min=j;
            }
        }
        tmp=e[min];
        e[min]=e[i];
        e[i]=tmp;
    }


}



