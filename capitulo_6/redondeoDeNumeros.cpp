#include <iostream>
#include <cmath>  // Para usar la funci�n floor
#include <iomanip> // Para manipular la salida con precisi�n

using namespace std;

// Funci�n para redondear al entero m�s cercano
double redondearAEntero(double numero) {
    return floor(numero + 0.5);
}

// Funci�n para redondear a la d�cima m�s cercana
double redondearADecimas(double numero) {
    return floor(numero * 10 + 0.5) / 10;
}

// Funci�n para redondear a la cent�sima m�s cercana
double redondearACentesimas(double numero) {
    return floor(numero * 100 + 0.5) / 100;
}

// Funci�n para redondear a la mil�sima m�s cercana
double redondearAMilesimas(double numero) {
    return floor(numero * 1000 + 0.5) / 1000;
}

int main() {
    double numero;

    // Solicitar el n�mero al usuario
    cout << "Introduce un n�mero: ";
    cin >> numero;

    // Establecer el formato de salida
    cout << fixed << setprecision(3); // Para mostrar hasta tres decimales

    // Mostrar el n�mero original y el redondeo de acuerdo a las funciones
    cout << "N�mero original: " << numero << endl;
    cout << "Redondeado a entero: " << redondearAEntero(numero) << endl;
    cout << "Redondeado a d�cimas: " << redondearADecimas(numero) << endl;
    cout << "Redondeado a cent�simas: " << redondearACentesimas(numero) << endl;
    cout << "Redondeado a mil�simas: " << redondearAMilesimas(numero) << endl;

    return 0;
}
