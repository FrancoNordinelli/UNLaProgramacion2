#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "empleados.h"
#include "empresa.h"
#define CANTIDAD 5

struct EmpresaE{
    char rubro[40];
    char direccion[40];
    double telefono;
    int empleadoContador;
    Empleado empleados[CANTIDAD];

};


Empresa crearEmpresa(){

    Empresa e=malloc(sizeof(struct EmpresaE));
    e->empleadoContador=0;
    for(int i=0;i<CANTIDAD;i++){
        e->empleados[i]=iniciarCargaEmpleados();
    }
    strcpy(e->rubro,"LIBRERIA");
    e->telefono=42999146;
    strcpy(e->direccion, "Loreto 315, Burzaco");
    e->empleadoContador=0;

    return e;
}

void agregarEmpleado(Empresa em, char nom[], char ape[], int ed){
    em->empleados[em->empleadoContador]=crearEmpleado(nom,ape,ed);
    em->empleadoContador++;

}

void eliminarEmpleado(Empresa em, int ed){
    em->empleados[0]=iniciarCargaEmpleados();
    em->empleadoContador--;
}



void mostrarEmpresa(Empresa e){
    printf("\nRubro: %s\n", e->rubro);
    printf("Direccion: %s", e->direccion);
    printf("\nTelefono:%.0f\n", e->telefono);

    for(int i=0;i<CANTIDAD;i++){
        if(getEdad(e->empleados[i])!=0){
        mostrarEmpleado(e->empleados[i]);
        }
    }
}

void mostrarOrdenamientoPorSueldo(Empresa em){
    ordenamientoSeleccion(em->empleados);
}


