#include <iostream>
using namespace std;

int main() {
    // (a) Patr�n ascendente de asteriscos
    cout << "Patr�n a:" << endl;
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // (b) Patr�n descendente de asteriscos
    cout << "\nPatr�n b:" << endl;
    for (int i = 10; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // (c) Patr�n de asteriscos con espacios antes
    cout << "\nPatr�n c:" << endl;
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= (10 - i); j++) {
            cout << " ";  // Espacios en blanco
        }
        for (int k = 1; k <= i; k++) {
            cout << "*";  // Asteriscos
        }
        cout << endl;
    }

    // (d) Patr�n invertido de asteriscos con espacios antes
    cout << "\nPatr�n d:" << endl;
    for (int i = 10; i >= 1; i--) {
        for (int j = 1; j <= (10 - i); j++) {
            cout << " ";  // Espacios en blanco
        }
        for (int k = 1; k <= i; k++) {
            cout << "*";  // Asteriscos
        }
        cout << endl;
    }

    // Cr�dito adicional: Imprimir los cuatro patrones uno al lado del otro
    cout << "\nTodos los patrones juntos:" << endl;
    for (int i = 1; i <= 10; i++) {
        // Patr�n (a)
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << "   "; // Separaci�n entre patrones

        // Patr�n (b)
        for (int j = 1; j <= (11 - i); j++) {
            cout << "*";
        }
        cout << "   "; // Separaci�n entre patrones

        // Patr�n (c)
        for (int j = 1; j <= (10 - i); j++) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << "   "; // Separaci�n entre patrones

        // Patr�n (d)
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
