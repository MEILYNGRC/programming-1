#include <iostream>
using namespace std;

// Definici�n de la enum con alcance TipoCuenta
enum class TipoCuenta {
    AHORROS,   // Cuenta de ahorros
    CHEQUES,   // Cuenta corriente (cheques)
    INVERSION  // Cuenta de inversi�n
};

int main() {
    // Crear una variable de tipo TipoCuenta
    TipoCuenta cuenta = TipoCuenta::AHORROS;

    // Imprimir el valor de la enumeraci�n usando un cast
    switch (cuenta) {
        case TipoCuenta::AHORROS:
            cout << "Tipo de cuenta: AHORROS" << endl;
            break;
        case TipoCuenta::CHEQUES:
            cout << "Tipo de cuenta: CHEQUES" << endl;
            break;
        case TipoCuenta::INVERSION:
            cout << "Tipo de cuenta: INVERSION" << endl;
            break;
    }

    return 0;
}
