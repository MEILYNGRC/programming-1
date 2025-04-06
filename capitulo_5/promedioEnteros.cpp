#include <iostream>
using namespace std;

int main() {
    int sum = 0;          // Variable para almacenar la suma de los n�meros
    int count = 0;        // Variable para contar la cantidad de n�meros v�lidos
    int number;           // Variable para almacenar el n�mero le�do

    // Usamos un bucle for, con el valor centinela (9999) como condici�n de parada
    for (;;) {
        cout << "Introduzca un n�mero (9999 para terminar): ";
        cin >> number;

        if (number == 9999) {
            break;  // Si el n�mero es 9999, salimos del bucle
        }

        sum += number;  // Agregamos el n�mero a la suma
        count++;         // Incrementamos el contador
    }

    // Si al menos un n�mero fue ingresado
    if (count > 0) {
        double average = static_cast<double>(sum) / count;  // Calculamos el promedio
        cout << "El promedio de los n�meros es: " << average << endl;
    } else {
        cout << "No se introdujeron n�meros para calcular el promedio." << endl;
    }

    return 0;
}
