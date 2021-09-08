#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED
//PRE: CREO LA ESTRUCTURA FECHA CON LOS DATOS QUE VOY A NECESITAR;
//POST: LOS DATOS ENTEROS DIA, MES, ANIO SE USARAN LAS FUNCIONES
struct EstructuraFecha{
	int dia;
	int mes;
	int anio;
};
//PRE: SE CREO LA EstructuraFecha CON LOS DATOS QUE LLEVA
//POST: AHORA Fecha ES UN TIPO DE DATO struct GRACIAS AL typedef 
typedef struct EstructuraFecha * Fecha;
//---------------CONSTRUCTOR-----------
//PRE: Fecha ES UN TIPO DE DATO struct YA CREADO POR MEDIO DEL typedef
//POST: SE CARGAN LOS DATOS DE LA EstrcturaFecha Y SE RETORNA f
Fecha cargarFecha();
//PRE:SE CARGARON LOS DATOS DE LA struct EstructuraFecha (AHORA SOLO LLAMADO Fecha) Y SU RETORNO ES PARÁMETRO DE ESTE PROCEDIMIENTO mostrarFecha()
//POST: SE LLAMA A ESTE PROCEDIMIENTO EN EL main.c PARA MOSTRAR POR CONSOLA LO QUE SE CARGÓ
void mostrarFecha(Fecha r);
//PRE:DEBEN ESTAR DECLARADAS LAS VARIABLES ENTERAS EN EL MAIN (dia, mes, anio) Y LA VARIABLE fecha2 COMO UN TIPO DE DATO struct
//POST:LOS VALORES CARGADOS A d, m y a EN LA FUNCION SE RETORNAN EN EL MAIN PARA SER USADOS EN LA VARIBALE fecha2 

//ESTOS GET FUNCIONAN PARA PEDIR LOS DATOS DE UNA ESTRUCTURA EN EL MAIN. POSEEN COMO PARAMETRO AL TDA
int getDia(Fecha f);
int getMes(Fecha f);
int getAnio(Fecha f);
//ESTOS GET SON PARA MODIFICAR LOS DATOS DE UNA ESTRUCTURA. TAMBIEN RECIBEN AL TDA COMO PARÁMETRO Y AL DATO DE LA ESTRUCTURA QUE QUIERE MODIFICARSE
void setDia(Fecha f, int nuevoDia);
void setMes(Fecha f, int nuevoMes);
void setAnio(Fecha f, int nuevoAnio);

Fecha cargarFechaPorParametros(int d, int m, int a);

Fecha cargarFechaPorTeclado();

#endif
