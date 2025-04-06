#include <iostream>
using namespace std;

int main() {
    int n;

    // Leer un número impar en el rango de 1 a 19
    do {
        cout << "Introduce un número impar entre 1 y 19: ";
        cin >> n;
    } while (n < 1 || n > 19 || n % 2 == 0);

    // Parte superior del rombo
    for (int i = 1; i <= n; i += 2) {
        // Imprimir espacios
        for (int j = 0; j < (n - i) / 2; j++) {
            cout << " ";
        }
        // Imprimir asteriscos
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Parte inferior del rombo
    for (int i = n - 2; i >= 1; i -= 2) {
        // Imprimir espacios
        for (int j = 0; j < (n - i) / 2; j++) {
            cout << " ";
        }
        // Imprimir asteriscos
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
