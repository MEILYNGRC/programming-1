#ifndef JUEGO_H
#define JUEGO_H

//deben convertirse en metodos
class juego
{
    public:
        juego();
        virtual ~juego();

    protected:

    private:
};

#endif // JUEGO_H
if (jugador == pc){
            cout << "EMPATASTES" << endl;
        }
        else if ((jugador == 1 && pc == 3) || (jugador == 2 && pc == 1) || (jugador == 3 && pc == 2)) {
            cout << "GANASTES" << endl;
            ganancias = ganancias + 1;//acumulador
        }
        else {
            cout << "PERDISTES" << endl;
            perdidas = perdidas +1;
        }
    }
    cout << "Resultados: Ganastes " << ganancias << " Perdistes " << perdidas << endl;

    return 0;
