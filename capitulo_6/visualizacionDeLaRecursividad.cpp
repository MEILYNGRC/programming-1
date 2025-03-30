#include <iostream>
using namespace std;

// Funci�n factorial con visualizaci�n recursiva
int factorial(int n, int nivel = 0) {
    // Imprimir la variable local y el par�metro de la llamada recursiva
    for (int i = 0; i < nivel; i++) {
        cout << "  ";  // Espacios para mostrar el nivel de recursi�n
    }
    cout << "Llamada factorial(" << n << ")\n";

    // Caso base: Si n es 1 o 0, el factorial es 1
    if (n == 0 || n == 1) {
        for (int i = 0; i < nivel; i++) {
            cout << "  ";  // Espacios para mostrar el nivel de recursi�n
        }
        cout << "Retorno factorial(" << n << ") = 1\n";
        return 1;
    }

    // Llamada recursiva
    int resultado = n * factorial(n - 1, nivel + 1);

    // Imprimir el valor retornado por la llamada recursiva
    for (int i = 0; i < nivel; i++) {
        cout << "  ";  // Espacios para mostrar el nivel de recursi�n
    }
    cout << "Retorno factorial(" << n << ") = " << resultado << "\n";

    return resultado;
}

int main() {
    int numero;
    cout << "Ingresa un n�mero para calcular su factorial: ";
    cin >> numero;

    cout << "C�lculo del factorial de " << numero << ":\n";
    int resultado = factorial(numero);

    cout << "El factorial de " << numero << " es: " << resultado << endl;

    return 0;
}
