#include <iostream>
using namespace std;

int main() {
    double a, b, c;

    // Leer los tres lados
    cout << "Ingrese el primer lado: ";
    cin >> a;

    cout << "Ingrese el segundo lado: ";
    cin >> b;

    cout << "Ingrese el tercer lado: ";
    cin >> c;

    // Verificar si los tres valores pueden representar un triángulo
    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Los lados deben ser mayores que cero." << endl;
    } else if (a + b > c && a + c > b && b + c > a) {
        cout << "Los valores ingresados pueden representar un triángulo." << endl;
    } else {
        cout << "Los valores ingresados NO pueden representar un triángulo." << endl;
    }

    return 0;
}
