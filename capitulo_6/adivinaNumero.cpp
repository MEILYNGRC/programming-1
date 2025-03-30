#include <iostream>
#include <cstdlib>  // Para la función rand() y srand()
#include <ctime>    // Para la función time() para la semilla de aleatoriedad
using namespace std;

int main() {
    // Inicializar la semilla para los números aleatorios
    srand(time(0));

    // Elegir un número aleatorio entre 1 y 1000
    int numeroSecreto = rand() % 1000 + 1;

    int intento;
    int contador = 0;

    cout << "Tengo un número entre 1 y 1000." << endl;
    cout << "¿Puedes adivinar mi número?" << endl;
    cout << "Por favor escribe tu primera respuesta: ";

    // El jugador tiene que adivinar el número
    do {
        cin >> intento;
        contador++;

        if (intento > numeroSecreto) {
            cout << "Demasiado alto. Intenta de nuevo: ";
        } else if (intento < numeroSecreto) {
            cout << "Demasiado bajo. Intenta de nuevo: ";
        } else {
            cout << "¡Felicidades! Has adivinado el número en " << contador << " intentos." << endl;
        }
    } while (intento != numeroSecreto);

    return 0;
}
