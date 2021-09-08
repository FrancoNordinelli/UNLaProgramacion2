#ifndef QUINI_H_INCLUDED
#define QUINI_H_INCLUDED

struct QuiniE;

typedef struct QuiniE * Quini;

int buscarBolilla(Quini q, int num);

Quini crearQuini();

void mostrarQuini(Quini q);

int comparaNumeros(Jugador j, Quini q);

void juego(Jugador j, Quini q);


#endif // QUINI_H_INCLUDED
