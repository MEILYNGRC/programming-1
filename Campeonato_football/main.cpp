#include "football.h"
#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    char opcion;
    do {
        Equipo equipos[NUM_EQUIPOS];
        int resultados[NUM_EQUIPOS][NUM_EQUIPOS] = {0};

        ingresarEquipos(equipos);
        generarPartidos(equipos, resultados);
        calcularTabla(equipos, resultados);
        mostrarTabla(equipos);
        determinarGanadorYPerdedor(equipos);

        cout << "\n\n¿Desea generar otro campeonato? (s/n): ";
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S');
    return 0;
}
