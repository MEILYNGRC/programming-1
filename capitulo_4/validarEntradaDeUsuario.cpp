#include <iostream>
using namespace std;

int main() {
    int aprobados = 0;
    int reprobados = 0;
    int contadorEstudiantes = 1;
    int resultado;

    // Procesar resultados para 10 estudiantes
    while (contadorEstudiantes <= 10) {
        cout << "Escriba el resultado (1 = aprobado, 2 = reprobado): ";
        cin >> resultado;

        // Validar la entrada
        while (resultado != 1 && resultado != 2) {
            cout << "Entrada invalida. Intente de nuevo (1 = aprobado, 2 = reprobado): ";
            cin >> resultado;
        }

        // Contabilizar resultados válidos
        if (resultado == 1) {
            ++aprobados;
        } else {
            ++reprobados;
        }

        ++contadorEstudiantes;
    }

    // Mostrar los resultados
    cout << "\nAprobados: " << aprobados << endl;
    cout << "Reprobados: " << reprobados << endl;

    // Recompensa al instructor
    if (aprobados > 8) {
        cout << "¡Bono para el instructor!" << endl;
    }

    return 0;
}

