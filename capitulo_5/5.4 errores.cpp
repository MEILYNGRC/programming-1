// encontrar errores
for ( unsigned int x = 100; x >= 1; --x )  // Decrementamos x, porque el ciclo nunca terminar�a con la condici�n x >= 1.
    cout << x << endl;


switch ( valor % 2 )
{
    case 0:
       cout << "Entero par" << endl;
       break;  // A�adimos un break para evitar que el flujo contin�e.
    case 1:
       cout << "Entero impar" << endl;
       break;  // A�adimos un break para evitar que el flujo contin�e.
}

for ( int x = 19; x >= 1; x -= 2 )  // Decrementamos x en lugar de sumarlo
    cout << x << endl;


unsigned int counter = 2;
do
{
    cout << counter << endl;  // Usamos el nombre correcto de la variable
    counter += 2;
} while ( counter <= 100 );  // Cambiamos 'While' por 'while' en min�sculas
