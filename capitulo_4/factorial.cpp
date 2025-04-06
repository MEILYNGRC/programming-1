#include <iostream>
using namespace std;

int main() {
    int n;
    long long factorial = 1;  // Usamos long long para manejar números grandes

    // Leer el número no negativo
    cout << "Ingrese un número entero no negativo: ";
    cin >> n;

    // Verificar si el número es negativo
    if (n < 0) {
        cout << "Por favor ingrese un número no negativo." << endl;
        return 1;
    }

    // Calcular el factorial utilizando un bucle while
    int i = 1;
    while (i <= n) {
        factorial *= i;  // Multiplicamos factorial por i
        ++i;  // Incrementamos i
    }

    // Imprimir el resultado
    cout << "El factorial de " << n << " es: " << factorial << endl;

    return 0;
}
