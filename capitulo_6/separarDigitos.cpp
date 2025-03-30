#include <iostream>
using namespace std;

// Función para calcular la parte entera del cociente
int parteEntera(int a, int b) {
    return a / b;
}

// Función para calcular el residuo entero
int residuo(int a, int b) {
    return a % b;
}

// Función para imprimir los dígitos de un número con dos espacios entre cada uno
void imprimirDigitos(int numero) {
    int divisor = 10000; // Iniciar con el divisor más grande para un número entre 1 y 32767
    bool primero = true;  // Para controlar el espaciado correcto

    while (divisor > 0) {
        int digito = parteEntera(numero, divisor);
        numero = residuo(numero, divisor);

        if (!primero) {
            cout << "  "; // Imprimir dos espacios
        }
        cout << digito;
        primero = false;

        divisor /= 10; // Reducir el divisor para obtener el siguiente dígito
    }
    cout << endl;
}

int main() {
    int numero;
    cout << "Introduce un número entre 1 y 32767: ";
    cin >> numero;

    // Verificar si el número está dentro del rango permitido
    if (numero >= 1 && numero <= 32767) {
        imprimirDigitos(numero);
    } else {
        cout << "Número fuera de rango." << endl;
    }

    return 0;
}
