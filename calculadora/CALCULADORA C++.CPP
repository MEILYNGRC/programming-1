#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char operacion;

    cout << "Ingrese el primer valor: ";
    cin >> num1;

    cout << "Ingrese la operaci�n (+, -, *, /): ";
    cin >> operacion;

    cout << "Ingrese el segundo valor: ";
    cin >> num2;

    switch (operacion) {
        case '+':
            cout << "Resultado: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Resultado: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Resultado: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "Resultado: " << num1 / num2 << endl;
            else
                cout << "Error: Divisi�n por cero no permitida." << endl;
            break;
        default:
            cout << "Operaci�n no v�lida." << endl;
    }

    return 0;
}
