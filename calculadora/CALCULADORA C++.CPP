#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char operacion;

    cout << "Ingrese el primer valor: ";
    cin >> num1;

    cout << "Ingrese la operación (+, -, *, /): ";
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
                cout << "Error: División por cero no permitida." << endl;
            break;
        default:
            cout << "Operación no válida." << endl;
    }

    return 0;
}
