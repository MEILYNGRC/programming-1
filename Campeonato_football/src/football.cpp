#include "football.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

void ingresarEquipos(Equipo equipos[]) {
    cout << "Ingrese los nombres de los 6 equipos:\n";
    for (int i = 0; i < NUM_EQUIPOS; i++) {
        cout << "Equipo " << i + 1 << ": ";
        cin >> equipos[i].nombre;
    }
}

void generarPartidos(Equipo equipos[], int resultados[][NUM_EQUIPOS]) {
    for (int i = 0; i < NUM_EQUIPOS; i++) {
        for (int j = 0; j < NUM_EQUIPOS; j++) {
            if (i != j) {
                int golesA = rand() % (MAX_GOLES + 1);
                int golesB = rand() % (MAX_GOLES + 1);
                resultados[i][j] = golesA;
                resultados[j][i] = golesB;
            }
        }
    }
}

void calcularTabla(Equipo equipos[], int resultados[][NUM_EQUIPOS]) {
    for (int i = 0; i < NUM_EQUIPOS; i++) {
        for (int j = 0; j < NUM_EQUIPOS; j++) {
            if (i != j) {
                equipos[i].jugados++;
                equipos[i].golesAFavor += resultados[i][j];
                equipos[i].golesEnContra += resultados[j][i];

                if (resultados[i][j] > resultados[j][i]) {
                    equipos[i].ganados++;
                    equipos[i].puntos += 3;
                } else if (resultados[i][j] == resultados[j][i]) {
                    equipos[i].empatados++;
                    equipos[i].puntos += 1;
                } else {
                    equipos[i].perdidos++;
                }
            }
        }
    }
}

void mostrarTabla(Equipo equipos[]) {
    cout << "\nTabla de posiciones:\n";
    cout << left << setw(12) << "Equipo" << setw(8) << "PJ" << setw(8) << "G" << setw(8) << "E" << setw(8) << "P"
         << setw(8) << "GF" << setw(8) << "GC" << setw(8) << "Puntos" << endl;

    for (int i = 0; i < NUM_EQUIPOS; i++) {
        cout << left << setw(12) << equipos[i].nombre << setw(8) << equipos[i].jugados
             << setw(8) << equipos[i].ganados << setw(8) << equipos[i].empatados
             << setw(8) << equipos[i].perdidos << setw(8) << equipos[i].golesAFavor
             << setw(8) << equipos[i].golesEnContra << setw(8) << equipos[i].puntos << endl;
    }
}

void determinarGanadorYPerdedor(Equipo equipos[]) {
    int maxPuntos = -1, minPuntos = 1000;
    string ganador, perdedor;

    for (int i = 0; i < NUM_EQUIPOS; i++) {
        if (equipos[i].puntos > maxPuntos) {
            maxPuntos = equipos[i].puntos;
            ganador = equipos[i].nombre;
        }
        if (equipos[i].puntos < minPuntos) {
            minPuntos = equipos[i].puntos;
            perdedor = equipos[i].nombre;
        }
    }

    cout << "\nEl equipo campeón es: " << ganador << " con " << maxPuntos << " puntos.";
    cout << "\nEl equipo que baja de categoría es: " << perdedor << " con " << minPuntos << " puntos.";
}
