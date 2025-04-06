#include <iostream>
using namespace std;

int main() {
    int n;
    double e = 1.0;  // Empezamos con 1 porque el primer t�rmino de la suma es 1
    long long factorial = 1;  // Inicializamos el factorial

    // Leer la cantidad de t�rminos
    cout << "Ingrese el n�mero de t�rminos para estimar e: ";
    cin >> n;

    // Calcular la suma de los t�rminos
    for (int i = 1; i <= n; ++i) {
        factorial *= i;  // Calculamos el factorial de i
        e += 1.0 / factorial;  // Sumamos el t�rmino 1 / i!
    }

    // Imprimir el valor estimado de e
    cout << "Valor estimado de e con " << n << " t�rminos es: " << e << endl;

    return 0;
}
