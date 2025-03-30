#include <iostream>
using namespace std;

// Plantilla de función para determinar el máximo de dos valores
template <typename T>
T maximo(T a, T b) {
    return (a > b) ? a : b;  // Retorna el mayor de los dos valores
}

int main() {
    // Probar la plantilla con diferentes tipos de datos

    // Tipo entero
    int a = 5, b = 8;
    cout << "El mayor de " << a << " y " << b << " es: " << maximo(a, b) << endl;

    // Tipo carácter
    char c1 = 'a', c2 = 'z';
    cout << "El mayor de '" << c1 << "' y '" << c2 << "' es: " << maximo(c1, c2) << endl;

    // Tipo flotante
    float f1 = 3.14, f2 = 2.71;
    cout << "El mayor de " << f1 << " y " << f2 << " es: " << maximo(f1, f2) << endl;

    return 0;
}
