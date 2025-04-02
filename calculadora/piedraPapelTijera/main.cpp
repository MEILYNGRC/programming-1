#include <iostream>
#include <cstdlib> // Needed for rand() and srand()
#include <ctime>   // Needed for time()
#iclude "juego.h"

using namespace std;
main()
{
    srand(time(0));
    int jugador = 0;
    int pc = 0;
    int perdidas = 0;
    int ganancias = 0;
    while (ganancias < 3 && perdidas < 3)
    {
{       cout << "Piedra - Papel y Tijera" << endl;
        cout << "Elije: 1 para Piedra, 2 para Papel y 3 para Tijera" << endl;
        cin >> jugador;
        cout << "Tu " << eleccionJugador(jugador) <<endl;
        pc = aleatorio();
        cout << "PC " << eleccionJugador(pc) << endl;
    return 0;
}C
