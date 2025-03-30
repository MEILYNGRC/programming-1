#include <iostream>
using namespace std;

// Función recursiva para calcular base^exponente
int potencia(int base, int exponente) {
    // Caso base: cuando el exponente es 1, la potencia es la base
    if (exponente == 1) {
        return base;
    }
    // Caso recursivo: base * base^(exponente - 1)
    return base * potencia(base, exponente - 1);
}

int main() {
    int base, exponente;
    cout << "Introduce la base: ";
    cin >> base;
    cout << "Introduce el exponente: ";
    cin >> exponente;

    int resultado = potencia(base, exponente);
    cout << base << " elevado a " << exponente << " es: " << resultado << endl;

    return 0;
}
