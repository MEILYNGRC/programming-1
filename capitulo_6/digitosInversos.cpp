#include <iostream>
using namespace std;

// Funci�n que invierte los d�gitos de un n�mero entero
int digitosInversos(int numero) {
    int invertido = 0;

    // Mientras el n�mero sea mayor que 0
    while (numero > 0) {
        // Obtener el �ltimo d�gito
        int digito = numero % 10;

        // Agregar el d�gito invertido
        invertido = invertido * 10 + digito;

        // Eliminar el �ltimo d�gito del n�mero original
        numero /= 10;
    }

    return invertido;
}

int main() {
    int numero;
    cout << "Introduce un n�mero entero: ";
    cin >> numero;

    int resultado = digitosInversos(numero);
    cout << "N�mero con los d�gitos invertidos: " << resultado << endl;

    return 0;
}
