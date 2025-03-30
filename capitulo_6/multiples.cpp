#include <iostream>
using namespace std;

bool multiple(int a, int b) {
    return b % a == 0;
}

int main() {
    int a, b;
    char respuesta;

    do {
        cout << "Introduce el primer número: ";
        cin >> a;
        cout << "Introduce el segundo número: ";
        cin >> b;

        if (multiple(a, b)) {
            cout << b << " es múltiplo de " << a << endl;
        } else {
            cout << b << " no es múltiplo de " << a << endl;
        }

        cout << "¿Quieres ingresar otro par de números? (s/n): ";
        cin >> respuesta;

    } while (respuesta == 's' || respuesta == 'S');

    return 0;
}
