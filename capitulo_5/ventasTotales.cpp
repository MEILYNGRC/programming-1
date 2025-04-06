#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Precios de los productos
    const double precios[5] = {2.98, 4.50, 9.98, 4.49, 6.87};

    // Variables
    int producto;
    int cantidadVendida;
    double totalVentas = 0.0;

    // Mostrar los productos disponibles
    cout << "Productos disponibles: " << endl;
    cout << "Producto 1: $2.98" << endl;
    cout << "Producto 2: $4.50" << endl;
    cout << "Producto 3: $9.98" << endl;
    cout << "Producto 4: $4.49" << endl;
    cout << "Producto 5: $6.87" << endl;

    cout << "\nIngrese el número del producto (1-5) y la cantidad vendida. Ingrese -1 para salir." << endl;

    // Bucle para leer datos
    while (true) {
        cout << "Número del producto (1-5) o -1 para salir: ";
        cin >> producto;

        // Si el usuario ingresa -1, salir del bucle
        if (producto == -1) {
            break;
        }

        // Verificar que el número del producto sea válido
        if (producto < 1 || producto > 5) {
            cout << "Producto no válido. Ingrese un número entre 1 y 5." << endl;
            continue;
        }

        cout << "Cantidad vendida: ";
        cin >> cantidadVendida;

        // Calcular el total de ventas para el producto seleccionado
        totalVentas += precios[producto - 1] * cantidadVendida;
    }

    // Imprimir el total de ventas
    cout << fixed << setprecision(2);
    cout << "\nEl total de ventas es: $" << totalVentas << endl;

    return 0;
}
