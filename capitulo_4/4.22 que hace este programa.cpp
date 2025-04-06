//(¿Qué hace este programa?)  ¿Qué es lo que imprime el siguiente programa?
1 // Ejercicio 4.22: ej04_22.cpp
 2 // ¿Qué es lo que imprime este programa?
 3 #include <iostream>
 4 using namespace std;
 5
6 int main()
 7 {
 8    unsigned int fila = 10; // inicializa fila
 9
10    while ( fila >= 1 ) // itera hasta que fila < 1
 11    {
12       unsigned int columna = 1; // establece columna a 1 cuando empieza la iteración
 13
14       while ( columna <= 10 ) // itera 10 vecess
 15       {
16          cout << ( fila % 2 ? "<" : ">" ); // salida
 17          ++columna; // incrementa columna
 18       } // fin de while interior
 19
20       --fila; // decrementa fila
 21       cout << endl; // empieza nueva línea de salida
 22    } // fin de while exterior
 23 } // fin de main
