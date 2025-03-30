#include <iostream>
#include <iomanip>
//meilyn garcia marzo
using namespace std;

double calcularCargos(double horas) {

    if (horas <= 3) {
        return 2.00;
    }

    else {
        double cargo_adicional = (horas - 3) * 0.50;

        double cargo_total = 2.00 + cargo_adicional;
        if (cargo_total > 10.00) {
            return 10.00;
        } else {
            return cargo_total;
        }
    }
}

int main() {
    double horas, total_horas = 0, total_cargos = 0;

    cout << fixed << setprecision(2);


    cout << "Automóvil      Horas        Cargo" << endl;

    for (int i = 1; i <= 3; i++) {
        cout << "Introduce las horas de estacionamiento para el automóvil " << i << ": ";
        cin >> horas;

        double cargo = calcularCargos(horas);
        total_horas += horas;
        total_cargos += cargo;

        cout << i << "              " << horas << "         " << cargo << endl;
    }

    // Imprimir el total
    cout << "TOTAL           " << total_horas << "         " << total_cargos << endl;

    return 0;
}
