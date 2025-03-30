#include <iostream>
#include <cmath>  // Para usar M_PI

using namespace std;

// Función inline para calcular el área de un círculo
inline double areaCirculo(double radio) {
    return M_PI * radio * radio;  // Fórmula para el área: π * r^2
}

int main() {
    double radio;

    // Pedir al usuario el radio del círculo
    cout << "Introduce el radio del círculo: ";
    cin >> radio;

    // Calcular el área utilizando la función inline
    double area = areaCirculo(radio);

    // Mostrar el resultado
    cout << "El área del círculo con radio " << radio << " es: " << area << endl;

    return 0;
}
