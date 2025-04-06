// Calculadora de salario con horas extra
#include <iostream>
#include <iomanip> // Para usar setprecision
using namespace std;

int main() {
    double horasTrabajadas;
    double tarifaHora;
    double salario;

    // Solicita las horas trabajadas
    cout << "Introduzca las horas trabajadas (-1 para salir): ";
    cin >> horasTrabajadas;

    // Ciclo para procesar múltiples empleados
    while (horasTrabajadas != -1) {
        cout << "Introduzca la tarifa por horas del empleado ($00.00): ";
        cin >> tarifaHora;

        // Cálculo del salario
        if (horasTrabajadas <= 40) {
            salario = horasTrabajadas * tarifaHora;
        } else {
            double horasNormales = 40;
            double horasExtras = horasTrabajadas - 40;
            salario = (horasNormales * tarifaHora) + (horasExtras * tarifaHora * 1.5);
        }

        // Muestra el salario con dos decimales
        cout << fixed << setprecision(2);
        cout << "El salario es $" << salario << endl;

        // Pide datos para el siguiente empleado
        cout << "\nIntroduzca las horas trabajadas (-1 para salir): ";
        cin >> horasTrabajadas;
    }

    return 0;
}
