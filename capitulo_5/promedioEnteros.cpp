#include <iostream>
using namespace std;

int main() {
    int sum = 0;          // Variable para almacenar la suma de los números
    int count = 0;        // Variable para contar la cantidad de números válidos
    int number;           // Variable para almacenar el número leído

    // Usamos un bucle for, con el valor centinela (9999) como condición de parada
    for (;;) {
        cout << "Introduzca un número (9999 para terminar): ";
        cin >> number;

        if (number == 9999) {
            break;  // Si el número es 9999, salimos del bucle
        }

        sum += number;  // Agregamos el número a la suma
        count++;         // Incrementamos el contador
    }

    // Si al menos un número fue ingresado
    if (count > 0) {
        double average = static_cast<double>(sum) / count;  // Calculamos el promedio
        cout << "El promedio de los números es: " << average << endl;
    } else {
        cout << "No se introdujeron números para calcular el promedio." << endl;
    }

    return 0;
}
