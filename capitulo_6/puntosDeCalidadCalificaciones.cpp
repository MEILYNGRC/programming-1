#include <iostream>
using namespace std;

// Función que determina los puntos de calidad según el promedio
int puntosCalidad(double promedio) {
    if (promedio >= 90 && promedio <= 100) {
        return 4;
    } else if (promedio >= 80 && promedio < 90) {
        return 3;
    } else if (promedio >= 70 && promedio < 80) {
        return 2;
    } else if (promedio >= 60 && promedio < 70) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    double promedio;
    cout << "Introduce el promedio del estudiante: ";
    cin >> promedio;

    int calidad = puntosCalidad(promedio);
    cout << "Los puntos de calidad para el promedio " << promedio << " son: " << calidad << endl;

    return 0;
}
