#ifndef JUGADOR_H_INCLUDED
#define JUGADOR_H_INCLUDED

struct JugadorE;

typedef struct JugadorE * Jugador;

Jugador crearJugador();

int cargarNumerosPersonalizados();

int cargarNumerosAleatorios();

int buscarNumero(Jugador j, int numero);

void mostrarJugador(Jugador j);

char * getNombre(Jugador j);

int * getNumeros(Jugador j, int i);


#endif // JUGADOR_H_INCLUDED
