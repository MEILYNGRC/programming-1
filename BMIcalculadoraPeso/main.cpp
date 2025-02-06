#include <iostream>
#include <cstdlib>
//Este programa permite comprobar el funcionamiento de estructuras secuenciales, condicionales y ciclos
//Febrero 2025 Meilyngrc
using namespace std;

int main()
{
    //Variables operadores
    float pesoEnLibras = 0;
    float alturaEnPulgadas = 0;
    float pesoEnKilogramos = 0;
    float alturaEnMetros = 0;
    float resultadoDeImc = 0;
    int opcionSeleccionada = 0;
    char salida;
    //inicia el ciclo
    do
    {
        system("cls");
        cout << "Calculadora" << endl;
        //Menu de opciones en calculadora
        cout << "1. peso en libras y altura pulgadas" << endl;
        cout << "2. peso en kilogramos y altura metros"<<endl;
        cout << "t   Opcion: ";
        cin >> opcionSeleccionada;
        // Estructuras condicionales
        if (opcionSeleccionada==1)
        {
            cout << "Ingrese su peso libras: " << endl;
            cin >> pesoEnLibras;
            cout << "Ingrese su altura en pulgadas" << endl;
            cin >> alturaEnPulgadas;
        }
          else if (opcionSeleccionada ==2)
          {
            cout << "Ingrese su peso kilogramos: " << endl;
            cin >> pesoEnKilogramos;
            cout << "Ingrese su altura en metros: " << endl;
            cin >> alturaEnMetros;
          } else
          {
            cout <<"opcion no valida... "endl;
            continue;
          }
        switch  (opcionSeleccionada)
        {
            case 1:
                resultadoDeImc = (pesoEnLibras * 703)/ (alturaEnPulgadas*alturaEnPulgadas);
                break;
            case 2:
                resultadoDeImc = pesoEnKilogramos/ alturaEnMetros*alturaEnMetros;
                break;

            default:
                cout << "Error opcion seleccionada"<< endl;

        }
         }

        cout << "El resultado de su IMC es: " << resultadoDeImc << endl;

        //Rango del IMC
        if (resultadoDeImc < 18.5) {
            cout << "Rango: Bajo peso" << endl;
        } else if (resultadoDeImc >= 18.5 && resultadoDeImc <= 24.9) {
            cout << "Rango: Normal" << endl;
        } else if (resultadoDeImc >= 25 && resultadoDeImc <= 29.9) {
            cout << "Rango: Sobrepeso" << endl;
        } else {
            cout << "Rango: Obeso" << endl;
        }

        cout << "SU PESO En Imc es: " << resultadoDeImc << endl;
        cout << "Desea realizar otra operacion Si=S o No=N" << endl;
        cin >> salida;
    } while (salida == 's' || salida == 'S');
    return 0;
}
