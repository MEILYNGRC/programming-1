#include <iostream>
#include <cmath>  // Para poder utilizar funciones matemáticas
using namespace std;

int main() {
    double radio;

    // Leer el radio
    cout << "Ingrese el radio del circulo: ";
    cin >> radio;

    // Usamos el valor de π
    const double PI = 3.14159;

    // Calcular el diámetro, la circunferencia y el área
    double diametro = 2 * radio;
    double circunferencia = 2 * PI * radio;
    double area = PI * pow(radio, 2); // pow() calcula el cuadrado del radio

    // Imprimir los resultados
    cout << "Diametro: " << diametro << endl;
    cout << "Circunferencia: " << circunferencia << endl;
    cout << "Area: " << area << endl;

    return 0;
}

