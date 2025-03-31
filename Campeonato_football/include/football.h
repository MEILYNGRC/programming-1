#ifndef FOOTBALL_H
#define FOOTBALL_H

#include <string>
using namespace std;

const int NUM_EQUIPOS = 6;
const int MAX_GOLES = 10;

struct Equipo {
    string nombre;
    int jugados = 0, ganados = 0, empatados = 0, perdidos = 0, puntos = 0, golesAFavor = 0, golesEnContra = 0;
};

void ingresarEquipos(Equipo equipos[]);
void generarPartidos(Equipo equipos[], int resultados[][NUM_EQUIPOS]);
void calcularTabla(Equipo equipos[], int resultados[][NUM_EQUIPOS]);
void mostrarTabla(Equipo equipos[]);
void determinarGanadorYPerdedor(Equipo equipos[]);

#endif
