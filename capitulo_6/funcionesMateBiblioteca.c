#include <iostream>
#include <cmath>  // Para usar funciones matemáticas
#include <iomanip> // Para formatear la salida

using namespace std;

int main() {
    // Mostrar encabezado
    cout << fixed << setprecision(4); // Configurar la salida para mostrar 4 decimales

    // Tablas de valores
    double x;

    // Función sqrt(x)
    cout << "Tabla de valores para sqrt(x):\n";
    cout << "x\t\tsqrt(x)\n";
    for (x = 0; x <= 10; x += 1) {
        cout << x << "\t\t" << sqrt(x) << endl;
    }

    cout << "\n---------------------------------\n";

    // Función pow(x, 2)
    cout << "Tabla de valores para pow(x, 2):\n";
    cout << "x\t\tpow(x, 2)\n";
    for (x = 0; x <= 10; x += 1) {
        cout << x << "\t\t" << pow(x, 2) << endl;
    }

    cout << "\n---------------------------------\n";

    // Función sin(x)
    cout << "Tabla de valores para sin(x):\n";
    cout << "x (radianes)\t\tsin(x)\n";
    for (x = 0; x <= 10; x += 1) {
        cout << x << "\t\t" << sin(x) << endl;
    }

    cout << "\n---------------------------------\n";

    // Función cos(x)
    cout << "Tabla de valores para cos(x):\n";
    cout << "x (radianes)\t\tcos(x)\n";
    for (x = 0; x <= 10; x += 1) {
        cout << x << "\t\t" << cos(x) << endl;
    }

    cout << "\n---------------------------------\n";

    // Función tan(x)
    cout << "Tabla de valores para tan(x):\n";
    cout << "x (radianes)\t\ttan(x)\n";
    for (x = 0; x <= 10; x += 1) {
        cout << x << "\t\t" << tan(x) << endl;
    }

    cout << "\n---------------------------------\n";

    // Función log(x) (logaritmo natural)
    cout << "Tabla de valores para log(x):\n";
    cout << "x\t\tlog(x)\n";
    for (x = 1; x <= 10; x += 1) { // El logaritmo natural está definido solo para x > 0
        cout << x << "\t\t" << log(x) << endl;
    }

    cout << "\n---------------------------------\n";

    // Función exp(x) (e^x)
    cout << "Tabla de valores para exp(x):\n";
    cout << "x\t\texp(x)\n";
    for (x = 0; x <= 10; x += 1) {
        cout << x << "\t\t" << exp(x) << endl;
    }

    cout << "\n---------------------------------\n";

    // Función fabs(x) (valor absoluto)
    cout << "Tabla de valores para fabs(x):\n";
    cout << "x\t\tfabs(x)\n";
    for (x = -10; x <= 10; x += 1) {
        cout << x << "\t\t" << fabs(x) << endl;
    }

    return 0;
}
