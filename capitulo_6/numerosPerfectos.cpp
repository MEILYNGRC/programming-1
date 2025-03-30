#include <iostream>
#include <vector>
using namespace std;

// Funci�n que determina si un n�mero es perfecto
bool esPerfecto(int numero) {
    int sumaDivisores = 0;
    vector<int> divisores; // Para almacenar los divisores del n�mero

    // Encontrar los divisores del n�mero
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            sumaDivisores += i;
            divisores.push_back(i);
        }
    }

    // Si la suma de los divisores es igual al n�mero, es perfecto
    if (sumaDivisores == numero) {
        cout << "N�mero perfecto: " << numero << " con divisores: ";
        for (int div : divisores) {
            cout << div << " ";
        }
        cout << endl;
        return true;
    }

    return false;
}

int main() {
    // Buscar n�meros perfectos entre 1 y 1000
    cout << "N�meros perfectos entre 1 y 1000:" << endl;
    for (int i = 1; i <= 1000; i++) {
        esPerfecto(i);
    }

    // Evaluar un n�mero m�s grande
    int numGrande;
    cout << "\nIntroduce un n�mero grande para evaluar si es perfecto: ";
    cin >> numGrande;
    esPerfecto(numGrande);

    return 0;
}
