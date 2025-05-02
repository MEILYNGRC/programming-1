#include <iostream>
using namespace std;

int main() {
    int principal = 100000;  // Monto inicial en centavos (1000 dólares)
    int tasaInteres = 5;     // Tasa de interés anual en porcentaje
    int tiempo = 10;         // Tiempo en años
    int cantidad = principal;

    for (int i = 1; i <= tiempo; i++) {
        cantidad = cantidad + (cantidad * tasaInteres) / 100;
    }

    int dolares = cantidad / 100;  // Parte de dólares
    int centavos = cantidad % 100; // Parte de centavos

    cout << "Monto final después de " << tiempo << " años: $" << dolares << "." << centavos << endl;

    return 0;
}
