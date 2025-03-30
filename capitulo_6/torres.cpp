#include <iostream>
using namespace std;

// Función recursiva para resolver las Torres de Hanoi
void torresHanoi(int n, char origen, char destino, char auxiliar) {
    // Caso base: Si solo hay un disco, simplemente se mueve de origen a destino
    if (n == 1) {
        cout << origen << " → " << destino << endl;
        return;
    }

    // Mover n-1 discos de la aguja 'origen' a la aguja 'auxiliar', usando 'destino' como temporal
    torresHanoi(n - 1, origen, auxiliar, destino);

    // Mover el disco más grande de la aguja 'origen' a la aguja 'destino'
    cout << origen << " → " << destino << endl;

    // Mover los n-1 discos de la aguja 'auxiliar' a la aguja 'destino', usando 'origen' como temporal
    torresHanoi(n - 1, auxiliar, destino, origen);
}

int main() {
    int n;
    cout << "Ingresa el número de discos: ";
    cin >> n;

    // Llamada a la función recursiva para mover los discos de la aguja 1 a la aguja 3
    torresHanoi(n, '1', '3', '2');

    return 0;
}
