#include <iostream>
#include <vector>
using namespace std;

// Función que determina si un número es perfecto
bool esPerfecto(int numero) {
    int sumaDivisores = 0;
    vector<int> divisores; // Para almacenar los divisores del número

    // Encontrar los divisores del número
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            sumaDivisores += i;
            divisores.push_back(i);
        }
    }

    // Si la suma de los divisores es igual al número, es perfecto
    if (sumaDivisores == numero) {
        cout << "Número perfecto: " << numero << " con divisores: ";
        for (int div : divisores) {
            cout << div << " ";
        }
        cout << endl;
        return true;
    }

    return false;
}

int main() {
    // Buscar números perfectos entre 1 y 1000
    cout << "Números perfectos entre 1 y 1000:" << endl;
    for (int i = 1; i <= 1000; i++) {
        esPerfecto(i);
    }

    // Evaluar un número más grande
    int numGrande;
    cout << "\nIntroduce un número grande para evaluar si es perfecto: ";
    cin >> numGrande;
    esPerfecto(numGrande);

    return 0;
}
