//�QUE HACE ESTE PROGRAMA?
//Este programa calcula la suma de a, repetida b veces, utilizando recursi�n. Si se ingresan los valores a = 3 y b = 4, el programa imprimir� el resultado 12, ya que suma el n�mero 3 un total de 4 veces.
#include <iostream>
using namespace std;

 int misterio( int, int ); // prototipo de funci�n

 int main()
 {
     int x = 0;
    int y = 0;

    cout << "Escriba dos enteros: ";
     cin >> x >> y;
     cout << "El resultado es " << misterio( x, y ) << endl;
  } // fin de main

 // el par�metro b debe ser un entero positivo para prevenir la recursividad infinita
  int misterio( int a, int b )
  {
     if ( 1 == b ) // caso base
        return a;
     else // paso recursivo
        return a + misterio( a, b - 1 );
  } // fin de la funci�n misterio
