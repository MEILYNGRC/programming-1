#include <iostream>
using namespace std;

int main() {
    // (a) Patrón ascendente de asteriscos
    cout << "Patrón a:" << endl;
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // (b) Patrón descendente de asteriscos
    cout << "\nPatrón b:" << endl;
    for (int i = 10; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // (c) Patrón de asteriscos con espacios antes
    cout << "\nPatrón c:" << endl;
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= (10 - i); j++) {
            cout << " ";  // Espacios en blanco
        }
        for (int k = 1; k <= i; k++) {
            cout << "*";  // Asteriscos
        }
        cout << endl;
    }

    // (d) Patrón invertido de asteriscos con espacios antes
    cout << "\nPatrón d:" << endl;
    for (int i = 10; i >= 1; i--) {
        for (int j = 1; j <= (10 - i); j++) {
            cout << " ";  // Espacios en blanco
        }
        for (int k = 1; k <= i; k++) {
            cout << "*";  // Asteriscos
        }
        cout << endl;
    }

    // Crédito adicional: Imprimir los cuatro patrones uno al lado del otro
    cout << "\nTodos los patrones juntos:" << endl;
    for (int i = 1; i <= 10; i++) {
        // Patrón (a)
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << "   "; // Separación entre patrones

        // Patrón (b)
        for (int j = 1; j <= (11 - i); j++) {
            cout << "*";
        }
        cout << "   "; // Separación entre patrones

        // Patrón (c)
        for (int j = 1; j <= (10 - i); j++) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << "   "; // Separación entre patrones

        // Patrón (d)
        for (int j = 1; j <= (10 - i); j++) {
            cout << " ";
        }
        for (int k = 1; k <= (11 - i); k++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
