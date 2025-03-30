#include <iostream>
using namespace std;

bool multiple(int a, int b) {
    return b % a == 0;
}

int main() {
    int a, b;
    char respuesta;

    do {
        cout << "Introduce el primer n�mero: ";
        cin >> a;
        cout << "Introduce el segundo n�mero: ";
        cin >> b;

        if (multiple(a, b)) {
            cout << b << " es m�ltiplo de " << a << endl;
        } else {
            cout << b << " no es m�ltiplo de " << a << endl;
        }

        cout << "�Quieres ingresar otro par de n�meros? (s/n): ";
        cin >> respuesta;

    } while (respuesta == 's' || respuesta == 'S');

    return 0;
}
