#include <iostream>
using namespace std;

//Este programa demostrarà como C++ trabaja la herencia
class Mago //Definiciòn de la clase Padre
{
public:
    Mago() //Constructor que solamente reserva memoria RAM
    {
    }
    Mago(int cantidadPoder, int cantidadVida, string nombre) //Constructor que reserva memoria RAM y asigna valores al objeto
    {
        mCantidadPoder = cantidadPoder;
        mCantidadVida = cantidadVida;
        mNombre = nombre;
    }
    int getVida()
    {
        return mCantidadVida;
    }
    string getNombre()
    {
        return mNombre;
    }
protected:// quiere decir que solo para ciertos puede ser accesible, privado a un nivel superior
    int mCantidadPoder, mCantidadVida;
    string mNombre;
};
class MagoHielo:public Mago//:public mago quiere decir que es clase hija de la clase mago eso identifica herencia
{
public:
    MagoHielo(int cantidadPoder, int cantidadVida, string nombre):Mago(cantidadPoder, cantidadVida, nombre)
    {
        mCantidadPoder =cantidadPoder+1;// para identificar el atributo (m) (_)
        mCantidadVida=cantidadVida+1;
        mNombre=nombre;
    }
};
class MagoFuego:public Mago
{
public:

    MagoFuego(int cantidadPoder, int cantidadVida, string nombre):Mago(cantidadPoder, cantidadVida, nombre)
    {
        mCantidadPoder=cantidadPoder;
        mCantidadVida=cantidadVida+100;
        mNombre=nombre;
    }
};
int main()
{
    Mago Gandalf(11, 100, "Gandalf");
    cout << "El nombre del mago es: " << Gandalf.getNombre() << endl;
    cout << "La cantidad de vida del mago es: " << Gandalf.getVida() << endl;
    MagoHielo Dumbledore(11, 100, "Dumbledore");
    cout << "El nombre del mago es: " << Dumbledore.getNombre() << endl;
    cout << "La cantidad de vida del mago es: " << Dumbledore.getVida() << endl;
    MagoFuego Harry(11,100, "Harry");
    cout << "El nombre del mago es: " << Harry.getNombre() << endl;
    cout << "La cantidad de vida del mago es: " << Harry.getVida() << endl;
    return 0;
};
