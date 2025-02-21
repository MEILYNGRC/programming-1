//MEILYN GARCIA 9959-23-17838
//PANPEOMATO FUTBOOLL
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

const int NUM_EQUIPOS = 6;
const int MAX_GOLES = 5; // Goles máximos por partido

struct Equipo {
    string nombre;
    int jugados = 0, ganados = 0, empatados = 0, perdidos = 0, puntos = 0;
    int golesAFavor = 0, golesEnContra = 0;
    float porcentajeGanados = 0, porcentajeEmpatados = 0, porcentajePerdidos = 0;
};

// Prototipos de funciones
void ingresarEquipos(Equipo equipos[]);
void generarPartidos(Equipo equipos[], int resultados[][NUM_EQUIPOS]);
void calcularTabla(Equipo equipos[], int resultados[][NUM_EQUIPOS]);
void calcularPorcentajes(Equipo equipos[]);
void ordenarTabla(Equipo equipos[]);
void mostrarTabla(Equipo equipos[]);
void determinarGanadorYPerdedor(Equipo equipos[]);

int main() {
    srand(time(0));

    char opcion;
    do {
        Equipo equipos[NUM_EQUIPOS];
        int resultados[NUM_EQUIPOS][NUM_EQUIPOS] = {0};

        ingresarEquipos(equipos);
        generarPartidos(equipos, resultados);
        calcularTabla(equipos, resultados);
        calcularPorcentajes(equipos);
        ordenarTabla(equipos);
        mostrarTabla(equipos);
        determinarGanadorYPerdedor(equipos);

        cout << "\n\n¿Desea generar otro campeonato? (s/n): ";
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S');

    return 0;
}

// Función para ingresar los nombres de los equipos
void ingresarEquipos(Equipo equipos[]) {
    cout << "Ingrese los nombres de los 6 equipos:\n";
    for (int i = 0; i < NUM_EQUIPOS; i++) {
        cout << "Equipo " << i + 1 << ": ";
        cin >> equipos[i].nombre;
    }
}

// Función para generar aleatoriamente los resultados de los partidos
void generarPartidos(Equipo equipos[], int resultados[][NUM_EQUIPOS]) {
    for (int i = 0; i < NUM_EQUIPOS; i++) {
        for (int j = 0; j < NUM_EQUIPOS; j++) {
            if (i != j) {
                // Partidos de ida y vuelta
                resultados[i][j] = rand() % (MAX_GOLES + 1);
                resultados[j][i] = rand() % (MAX_GOLES + 1);
            }
        }
    }
}

// Función para calcular la tabla de posiciones
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

// Función para calcular los porcentajes de victorias, empates y derrotas
void calcularPorcentajes(Equipo equipos[]) {
    for (int i = 0; i < NUM_EQUIPOS; i++) {
        if (equipos[i].jugados > 0) {
            equipos[i].porcentajeGanados = (equipos[i].ganados * 100.0) / equipos[i].jugados;
            equipos[i].porcentajeEmpatados = (equipos[i].empatados * 100.0) / equipos[i].jugados;
            equipos[i].porcentajePerdidos = (equipos[i].perdidos * 100.0) / equipos[i].jugados;
        }
    }
}

// Función para ordenar la tabla de posiciones por puntos
void ordenarTabla(Equipo equipos[]) {
    sort(equipos, equipos + NUM_EQUIPOS, [](Equipo a, Equipo b) {
        return a.puntos > b.puntos; // Ordena de mayor a menor
    });
}

// Función para mostrar la tabla de posiciones
void mostrarTabla(Equipo equipos[]) {
    cout << "\nTabla de posiciones:\n";
    cout << "+------------+----+----+----+----+----+----+----+----+----+----+\n";
    cout << "| Equipo     | PJ | G  | E  | P  | GF | GC | Pts | %G  | %E  | %P |\n";
    cout << "+------------+----+----+----+----+----+----+----+----+----+----+\n";

    for (int i = 0; i < NUM_EQUIPOS; i++) {
        cout << "| " << left << setw(10) << equipos[i].nombre
             << "| " << setw(2) << equipos[i].jugados
             << "| " << setw(2) << equipos[i].ganados
             << "| " << setw(2) << equipos[i].empatados
             << "| " << setw(2) << equipos[i].perdidos
             << "| " << setw(2) << equipos[i].golesAFavor
             << "| " << setw(2) << equipos[i].golesEnContra
             << "| " << setw(2) << equipos[i].puntos
             << "| " << setw(2) << fixed << setprecision(1) << equipos[i].porcentajeGanados
             << "| " << setw(2) << fixed << setprecision(1) << equipos[i].porcentajeEmpatados
             << "| " << setw(2) << fixed << setprecision(1) << equipos[i].porcentajePerdidos << " |\n";
        cout << "+------------+----+----+----+----+----+----+----+----+----+----+\n";
    }
}

// Función para determinar el equipo campeón y el último lugar
void determinarGanadorYPerdedor(Equipo equipos[]) {
    cout << "------------------------------------------------------------------\n";
    cout << "El equipo campeón es: " << equipos[0].nombre << " con " << equipos[0].puntos << " puntos.\n";
    cout << "El equipo que baja de categoría es: " << equipos[NUM_EQUIPOS - 1].nombre
         << " con " << equipos[NUM_EQUIPOS - 1].puntos << " puntos.\n";
}
