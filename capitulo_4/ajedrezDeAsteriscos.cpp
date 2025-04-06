#include <iostream>
using namespace std;

int main() {
    // Usamos dos bucles anidados para generar el patrón
    for (int fila = 0; fila < 8; ++fila) { // 8 filas
        for (int columna = 0; columna < 8; ++columna) { // 8 columnas
            // Si la fila y la columna sumadas son pares, imprimimos un asterisco
            if ((fila + columna) % 2 == 0) {
                cout << "* ";  // Imprime un asterisco
            } else {
                cout << " ";  // Imprime un espacio
            }
        }
        cout << endl;  // Salto de línea al final de cada fila
    }

    return 0;
}
