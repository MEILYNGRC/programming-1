//(¿Qué hace este programa?) ¿Qué es lo que imprime el siguiente programa?
1 // Ejercicio 4.12: ej04_12.cpp
 2 // ¿Qué imprime este programa?
 3 #include <iostream>
 4 using namespace std;
 Este programa en C++ calcula los cuadrados de los números del 1 al 10, los imprime en pantalla y luego muestra la suma total de esos cuadrados.
 5
6 int main()
 7 {
 8    unsigned int y = 0; // declara e inicializa y
 9    unsigned int x = 1; // declara e inicializa x
 10     unsigned int total = 0; // declara e inicializa el total
 11
12    while ( x <= 10 ) // itera 10 veces
 13    {
14       y = x * x; // realiza el cálculo
 15       cout << y << endl; // imprime el resultado
 16       total += y; // suma y al total
 17       ++x; // incrementa el contador x
 18    } // fin de while
 19
20    cout << "El total es " << total << endl; // muestra el resultado
 21 } // fin de main
