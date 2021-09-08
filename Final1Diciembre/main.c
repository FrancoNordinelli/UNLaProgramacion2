#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "empleados.h"
#include "empresa.h"
#define CANTIDAD 5

/*Realizar, utilizando el paradigma de TDA, un programa que permita, agregar, eliminar
y modificar Empleados dentro de una Empresa. De los empleados nos interesa conocer
su nombre, apellido, edad y sueldo. De la empresa queremos saber su dirección,
teléfono y rubro. El sueldo de los empleados es 50000 mas su edad multiplicada por
30.
En el main deben agregar 4 empleados a una empresa, mostrar la empresa (y sus
empleados), eliminar un empleado, y mostrar los empleados ordenados por medio del
método de selección (por sueldo)*/

int factorial(int n);

int main()
{
    printf("-----------PUNTO 1----------\n\n");
    printf("--------Mostrar 4 empleados------\n");
    Empresa empresa1=crearEmpresa();
    agregarEmpleado(empresa1, "Franco","Nordinelli",27);
    agregarEmpleado(empresa1, "Eduardo","Nordinelli",57);
    agregarEmpleado(empresa1, "Bianca","Nordinelli",24);
    agregarEmpleado(empresa1, "Viviana","Nanni",47);
    mostrarEmpresa(empresa1);
    printf("\n\n--------Eliminar un empleado-------\n");
    eliminarEmpleado(empresa1,27);
    mostrarEmpresa(empresa1);
    printf("\n----------Ordenamiento por Sueldo-----\n");
    mostrarOrdenamientoPorSueldo(empresa1);
    mostrarEmpresa(empresa1);
    printf("\n\n------------PUNTO 2---------\n\n");
    int numero;
    printf("Ingrese el numero que quiere factorizar: \n");
    scanf("%d", &numero);
    int factor=factorial(numero);
    printf("El factorial de %d es: %d", numero, factor);




    return 0;
}

int factorial(int n){
    if(n==1||n<=0){
        return 1;
    }
    return n * factorial(n-1);
}
