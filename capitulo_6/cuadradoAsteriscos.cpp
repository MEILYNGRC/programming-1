#include <iostream>
using namespace std;

void cuadradoDeAsteriscos(int lado) {
    for (int i = 0; i < lado; i++) {
        for (int j = 0; j < lado; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int lado;
    cout << "Introduce el tama�o del lado del cuadrado: ";
    cin >> lado;
    cuadradoDeAsteriscos(lado);
    return 0;
}
