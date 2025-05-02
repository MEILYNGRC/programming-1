#include <iostream>
using namespace std;

int main() {
    int n;           // N�mero de valores a leer
    int number;      // Variable para leer los n�meros
    int minValue;    // Variable para almacenar el valor m�nimo

    // Leer el n�mero de valores a comparar
    cout << "Introduzca el n�mero de valores a comparar: ";
    cin >> n;

    // Leer el primer n�mero
    cout << "Introduzca el primer n�mero: ";
    cin >> minValue;  // Suponemos que el primer valor es el m�nimo

    // Usamos un bucle for para leer los dem�s n�meros
    for (int i = 1; i < n; i++) {
        cout << "Introduzca el siguiente n�mero: ";
        cin >> number;

        // Si el n�mero actual es menor que el valor m�nimo, lo actualizamos
        if (number < minValue) {
            minValue = number;
        }
    }

    // Imprimir el valor m�nimo
    cout << "El n�mero m�s peque�o es: " << minValue << endl;

    return 0;
}
