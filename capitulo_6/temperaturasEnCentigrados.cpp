#include <iostream>
#include <iomanip>  // Para controlar la precisión de la salida
using namespace std;

// Función que convierte Fahrenheit a Centígrados
int centigrados(int fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

// Función que convierte Centígrados a Fahrenheit
int fahrenheit(int centigrados) {
    return (centigrados * 9 / 5) + 32;
}

int main() {
    // Encabezados de la tabla
    cout << fixed << setprecision(0); // Establecer precisión sin decimales
    cout << "Grados Centígrados  |  Grados Fahrenheit" << endl;
    cout << "------------------------------------------" << endl;

    // Imprimir las equivalencias de 0 a 100 grados Celsius en Fahrenheit
    for (int celsius = 0; celsius <= 100; celsius++) {
        cout << setw(18) << celsius << "  |  " << setw(18) << fahrenheit(celsius) << endl;
    }

    cout << endl;
    cout << "Grados Fahrenheit  |  Grados Centígrados" << endl;
    cout << "------------------------------------------" << endl;

    // Imprimir las equivalencias de 32 a 212 grados Fahrenheit en Celsius
    for (int fahr = 32; fahr <= 212; fahr++) {
        cout << setw(18) << fahr << "  |  " << setw(18) << centigrados(fahr) << endl;
    }

    return 0;
}
