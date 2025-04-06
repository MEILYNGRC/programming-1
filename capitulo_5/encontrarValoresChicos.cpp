#include <iostream>
using namespace std;

int main() {
    int n;           // Número de valores a leer
    int number;      // Variable para leer los números
    int minValue;    // Variable para almacenar el valor mínimo

    // Leer el número de valores a comparar
    cout << "Introduzca el número de valores a comparar: ";
    cin >> n;

    // Leer el primer número
    cout << "Introduzca el primer número: ";
    cin >> minValue;  // Suponemos que el primer valor es el mínimo

    // Usamos un bucle for para leer los demás números
    for (int i = 1; i < n; i++) {
        cout << "Introduzca el siguiente número: ";
        cin >> number;

        // Si el número actual es menor que el valor mínimo, lo actualizamos
        if (number < minValue) {
            minValue = number;
        }
    }

    // Imprimir el valor mínimo
    cout << "El número más pequeño es: " << minValue << endl;

    return 0;
}
