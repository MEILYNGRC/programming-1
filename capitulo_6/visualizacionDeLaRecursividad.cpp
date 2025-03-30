#include <iostream>
using namespace std;

// Función factorial con visualización recursiva
int factorial(int n, int nivel = 0) {
    // Imprimir la variable local y el parámetro de la llamada recursiva
    for (int i = 0; i < nivel; i++) {
        cout << "  ";  // Espacios para mostrar el nivel de recursión
    }
    cout << "Llamada factorial(" << n << ")\n";

    // Caso base: Si n es 1 o 0, el factorial es 1
    if (n == 0 || n == 1) {
        for (int i = 0; i < nivel; i++) {
            cout << "  ";  // Espacios para mostrar el nivel de recursión
        }
        cout << "Retorno factorial(" << n << ") = 1\n";
        return 1;
    }

    // Llamada recursiva
    int resultado = n * factorial(n - 1, nivel + 1);

    // Imprimir el valor retornado por la llamada recursiva
    for (int i = 0; i < nivel; i++) {
        cout << "  ";  // Espacios para mostrar el nivel de recursión
    }
    cout << "Retorno factorial(" << n << ") = " << resultado << "\n";

    return resultado;
}

int main() {
    int numero;
    cout << "Ingresa un número para calcular su factorial: ";
    cin >> numero;

    cout << "Cálculo del factorial de " << numero << ":\n";
    int resultado = factorial(numero);

    cout << "El factorial de " << numero << " es: " << resultado << endl;

    return 0;
}
