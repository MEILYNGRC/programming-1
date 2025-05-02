#include <iostream>
using namespace std;

int main() {
    int principal = 100000;  // Monto inicial en centavos (1000 d�lares)
    int tasaInteres = 5;     // Tasa de inter�s anual en porcentaje
    int tiempo = 10;         // Tiempo en a�os
    int cantidad = principal;

    for (int i = 1; i <= tiempo; i++) {
        cantidad = cantidad + (cantidad * tasaInteres) / 100;
    }

    int dolares = cantidad / 100;  // Parte de d�lares
    int centavos = cantidad % 100; // Parte de centavos

    cout << "Monto final despu�s de " << tiempo << " a�os: $" << dolares << "." << centavos << endl;

    return 0;
}
