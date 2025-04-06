#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero entero de cinco digitos: ";
    cin >> numero;

    // Validar que el n�mero tenga 5 d�gitos
    if (numero < 10000 || numero > 99999) {
        cout << "Numero invalido. Debe tener exactamente cinco digitos." << endl;
        return 1;
    }

    // Separar los d�gitos
    int primer = numero / 10000;
    int segundo = (numero / 1000) % 10;
    int cuarto = (numero / 10) % 10;
    int quinto = numero % 10;

    // Verificar si es pal�ndromo
    if (primer == quinto && segundo == cuarto) {
        cout << numero << " es un palindromo." << endl;
    } else {
        cout << numero << " no es un palindromo." << endl;
    }

    return 0;
}

