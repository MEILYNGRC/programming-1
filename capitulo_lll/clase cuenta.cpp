#include <iostream>

class Cuenta {
private:
    int saldo;

public:
    // Constructor
    Cuenta(int saldoInicial) {
        if (saldoInicial >= 0) {
            saldo = saldoInicial;
        } else {
            saldo = 0;
            std::cout << "Saldo inicial inválido. Se estableció en 0.\n";
        }
    }

    // Función para abonar saldo
    void abonar(int monto) {
        saldo += monto;
    }

    // Función para retirar saldo
    void cargar(int monto) {
        if (monto <= saldo) {
            saldo -= monto;
        } else {
            std::cout << "El monto a cargar excede el saldo de la cuenta.\n";
        }
    }

    // Función para obtener el saldo actual
    int obtenerSaldo() const {
        return saldo;
    }
};

int main() {
    // Crear objetos Cuenta
    Cuenta cuenta1(100);  // Saldo inicial válido
    Cuenta cuenta2(-50);  // Saldo inicial inválido

    // Operaciones con cuenta1
    std::cout << "Saldo inicial de cuenta1: " << cuenta1.obtenerSaldo() << "\n";
    cuenta1.abonar(50);
    std::cout << "Saldo después de abonar 50: " << cuenta1.obtenerSaldo() << "\n";
    cuenta1.cargar(30);
    std::cout << "Saldo después de cargar 30: " << cuenta1.obtenerSaldo() << "\n";
    cuenta1.cargar(200);  // Intento de retiro mayor al saldo

    // Operaciones con cuenta2
    std::cout << "Saldo inicial de cuenta2: " << cuenta2.obtenerSaldo() << "\n";
    cuenta2.abonar(100);
    std::cout << "Saldo después de abonar 100: " << cuenta2.obtenerSaldo() << "\n";

    return 0;
}
