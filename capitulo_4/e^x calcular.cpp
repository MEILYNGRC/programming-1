#include <iostream>
using namespace std;

int main() {
    double x, e_x = 1.0;  // Empezamos con el primer término de la suma (1)
    int n;

    // Leer el valor de x y el número de términos
    cout << "Ingrese el valor de x para calcular e^x: ";
    cin >> x;
    cout << "Ingrese el número de términos para la precisión de e^x: ";
    cin >> n;

    double term = 1.0;  // Empezamos con el primer término (x^0 / 0! = 1)

    // Calcular e^x usando la fórmula de la serie de Taylor
    for (int i = 1; i <= n; ++i) {
        term *= x / i;  // Calculamos x^i / i! para cada término
        e_x += term;  // Añadimos el término a la suma
    }

    // Imprimir el resultado estimado de e^x
    cout << "Valor estimado de e^" << x << " con " << n << " términos es: " << e_x << endl;

    return 0;
}
