#include <iostream>
#include "calculadora.h"

using namespace std;

int main() {
    Calculadora calc;
    int opcion, a, b;

    do {
        cout << "\nCalculadora\n";
        cout << "1. Suma\n2. Resta\n3. Multiplicación\n4. División\n5. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        if (opcion >= 1 && opcion <= 4) {
            cout << "Ingrese el primer número: ";
            cin >> a;
            cout << "Ingrese el segundo número: ";
            cin >> b;
        }

        switch (opcion) {
            case 1:
                cout << "El resultado es: " << calc.suma(a, b) << endl;
                break;
            case 2:
                cout << "El resultado es: " << calc.resta(a, b) << endl;
                break;
            case 3:
                cout << "El resultado es: " << calc.multiplicacion(a, b) << endl;
                break;
            case 4:
                if (b != 0)
                    cout << "El resultado es: " << calc.division(a, b) << endl;
                else
                    cout << "Error: División por cero no permitida.\n";
                break;
            case 5:
                cout << "Salida exitosa.\n";
                break;
            default:
                cout << "Opción inválida.\n";
                break;
        }
    } while (opcion != 5);

    return 0;
}
