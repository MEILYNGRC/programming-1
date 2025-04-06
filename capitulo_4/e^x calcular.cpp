#include <iostream>
using namespace std;

int main() {
    double x, e_x = 1.0;  // Empezamos con el primer t�rmino de la suma (1)
    int n;

    // Leer el valor de x y el n�mero de t�rminos
    cout << "Ingrese el valor de x para calcular e^x: ";
    cin >> x;
    cout << "Ingrese el n�mero de t�rminos para la precisi�n de e^x: ";
    cin >> n;

    double term = 1.0;  // Empezamos con el primer t�rmino (x^0 / 0! = 1)

    // Calcular e^x usando la f�rmula de la serie de Taylor
    for (int i = 1; i <= n; ++i) {
        term *= x / i;  // Calculamos x^i / i! para cada t�rmino
        e_x += term;  // A�adimos el t�rmino a la suma
    }

    // Imprimir el resultado estimado de e^x
    cout << "Valor estimado de e^" << x << " con " << n << " t�rminos es: " << e_x << endl;

    return 0;
}
