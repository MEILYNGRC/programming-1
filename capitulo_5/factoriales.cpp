#include <iostream>
using namespace std;

// Función que calcula el factorial de un número
long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    cout << "Número\tFactorial" << endl;
    cout << "------------------" << endl;

    // Calcular y mostrar los factoriales de 1 a 5
    for (int i = 1; i <= 5; i++) {
        cout << i << "\t" << factorial(i) << endl;
    }

    return 0;
}
