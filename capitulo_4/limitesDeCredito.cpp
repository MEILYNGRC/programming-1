// Ejercicio: Verificación de límites de crédito
#include <iostream>
using namespace std;

int main() {
    int cuenta;
    double saldoInicial, cargos, creditos, limiteCredito, nuevoSaldo;

    // Solicita el número de cuenta
    cout << "Introduzca el numero de cuenta (o -1 para salir): ";
    cin >> cuenta;

    // Ciclo principal
    while (cuenta != -1) {
        // Solicita el resto de los datos
        cout << "Introduzca el saldo inicial: ";
        cin >> saldoInicial;

        cout << "Introduzca los cargos totales: ";
        cin >> cargos;

        cout << "Introduzca los creditos totales: ";
        cin >> creditos;

        cout << "Introduzca el limite de credito: ";
        cin >> limiteCredito;

        // Calcula el nuevo saldo
        nuevoSaldo = saldoInicial + cargos - creditos;

        // Muestra el nuevo saldo
        cout << "El nuevo saldo es " << nuevoSaldo << endl;

        // Verifica si se excedió el límite de crédito
        if (nuevoSaldo > limiteCredito) {
            cout << "Cuenta:            " << cuenta << endl;
            cout << "Limite de credito: " << limiteCredito << endl;
            cout << "Saldo:             " << nuevoSaldo << endl;
            cout << "Se excedio el limite de su credito." << endl;
        }

        // Pregunta por el siguiente cliente
        cout << "\nIntroduzca el numero de cuenta (o -1 para salir): ";
        cin >> cuenta;
    }

    return 0;
}

