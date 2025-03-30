#include <iostream>
#include <cmath>  // Para usar la función floor
#include <iomanip> // Para manipular la salida con precisión

using namespace std;

// Función para redondear al entero más cercano
double redondearAEntero(double numero) {
    return floor(numero + 0.5);
}

// Función para redondear a la décima más cercana
double redondearADecimas(double numero) {
    return floor(numero * 10 + 0.5) / 10;
}

// Función para redondear a la centésima más cercana
double redondearACentesimas(double numero) {
    return floor(numero * 100 + 0.5) / 100;
}

// Función para redondear a la milésima más cercana
double redondearAMilesimas(double numero) {
    return floor(numero * 1000 + 0.5) / 1000;
}

int main() {
    double numero;

    // Solicitar el número al usuario
    cout << "Introduce un número: ";
    cin >> numero;

    // Establecer el formato de salida
    cout << fixed << setprecision(3); // Para mostrar hasta tres decimales

    // Mostrar el número original y el redondeo de acuerdo a las funciones
    cout << "Número original: " << numero << endl;
    cout << "Redondeado a entero: " << redondearAEntero(numero) << endl;
    cout << "Redondeado a décimas: " << redondearADecimas(numero) << endl;
    cout << "Redondeado a centésimas: " << redondearACentesimas(numero) << endl;
    cout << "Redondeado a milésimas: " << redondearAMilesimas(numero) << endl;

    return 0;
}
