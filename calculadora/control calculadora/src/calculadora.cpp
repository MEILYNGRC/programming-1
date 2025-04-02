#include "calculadora.h"

int Calculadora::suma(int a, int b) {
    return a + b;
}

int Calculadora::resta(int a, int b) {
    return a - b;
}

int Calculadora::multiplicacion(int a, int b) {
    return a * b;
}

double Calculadora::division(int a, int b) {
    if (b != 0) {
        return (double)a / b;
    } else {
        return 0; // Manejo de error simple
    }
}
