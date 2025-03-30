#include <iostream>
using namespace std;

// Función que invierte los dígitos de un número entero
int digitosInversos(int numero) {
    int invertido = 0;

    // Mientras el número sea mayor que 0
    while (numero > 0) {
        // Obtener el último dígito
        int digito = numero % 10;

        // Agregar el dígito invertido
        invertido = invertido * 10 + digito;

        // Eliminar el último dígito del número original
        numero /= 10;
    }

    return invertido;
}

int main() {
    int numero;
    cout << "Introduce un número entero: ";
    cin >> numero;

    int resultado = digitosInversos(numero);
    cout << "Número con los dígitos invertidos: " << resultado << endl;

    return 0;
}
