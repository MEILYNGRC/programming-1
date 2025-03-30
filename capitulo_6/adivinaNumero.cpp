#include <iostream>
#include <cstdlib>  // Para la funci�n rand() y srand()
#include <ctime>    // Para la funci�n time() para la semilla de aleatoriedad
using namespace std;

int main() {
    // Inicializar la semilla para los n�meros aleatorios
    srand(time(0));

    // Elegir un n�mero aleatorio entre 1 y 1000
    int numeroSecreto = rand() % 1000 + 1;

    int intento;
    int contador = 0;

    cout << "Tengo un n�mero entre 1 y 1000." << endl;
    cout << "�Puedes adivinar mi n�mero?" << endl;
    cout << "Por favor escribe tu primera respuesta: ";

    // El jugador tiene que adivinar el n�mero
    do {
        cin >> intento;
        contador++;

        if (intento > numeroSecreto) {
            cout << "Demasiado alto. Intenta de nuevo: ";
        } else if (intento < numeroSecreto) {
            cout << "Demasiado bajo. Intenta de nuevo: ";
        } else {
            cout << "�Felicidades! Has adivinado el n�mero en " << contador << " intentos." << endl;
        }
    } while (intento != numeroSecreto);

    return 0;
}
