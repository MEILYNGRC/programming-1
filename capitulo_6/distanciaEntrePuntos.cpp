#include <iostream>
#include <cmath>  // Para usar la función sqrt

using namespace std;

// Función para calcular la distancia entre dos puntos
double distancia(double x1, double y1, double x2, double y2) {
    // Usamos la fórmula de distancia euclidiana
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    double x1, y1, x2, y2;

    // Pedir las coordenadas de los dos puntos
    cout << "Ingresa las coordenadas del primer punto (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Ingresa las coordenadas del segundo punto (x2, y2): ";
    cin >> x2 >> y2;

    // Calcular la distancia
    double dist = distancia(x1, y1, x2, y2);

    // Imprimir el resultado
    cout << "La distancia entre los puntos (" << x1 << ", " << y1 << ") y ("
         << x2 << ", " << y2 << ") es: " << dist << endl;

    return 0;
}
