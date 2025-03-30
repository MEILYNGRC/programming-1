#include <iostream>
#include <iomanip>  // Para controlar la precisi�n de la salida
using namespace std;

// Funci�n que convierte Fahrenheit a Cent�grados
int centigrados(int fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

// Funci�n que convierte Cent�grados a Fahrenheit
int fahrenheit(int centigrados) {
    return (centigrados * 9 / 5) + 32;
}

int main() {
    // Encabezados de la tabla
    cout << fixed << setprecision(0); // Establecer precisi�n sin decimales
    cout << "Grados Cent�grados  |  Grados Fahrenheit" << endl;
    cout << "------------------------------------------" << endl;

    // Imprimir las equivalencias de 0 a 100 grados Celsius en Fahrenheit
    for (int celsius = 0; celsius <= 100; celsius++) {
        cout << setw(18) << celsius << "  |  " << setw(18) << fahrenheit(celsius) << endl;
    }

    cout << endl;
    cout << "Grados Fahrenheit  |  Grados Cent�grados" << endl;
    cout << "------------------------------------------" << endl;

    // Imprimir las equivalencias de 32 a 212 grados Fahrenheit en Celsius
    for (int fahr = 32; fahr <= 212; fahr++) {
        cout << setw(18) << fahr << "  |  " << setw(18) << centigrados(fahr) << endl;
    }

    return 0;
}
