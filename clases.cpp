#include <iostream>
#include <string>

using namespace std;

class Estudiante {
public:
    string nombre;
    int edad;
    string direccion;

    Estudiante(string nom, int ed, string dir) {
        nombre = nom;
        edad = ed;
        direccion = dir;
    }
    void mostrarInfo() {
        cout << "Mi objeto Estudiante se llama: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Direccion: " << direccion << endl << endl;
    }
    void saludar() {
        cout << nombre << " Hola" << endl;
    }
};

int main() {
    Estudiante estudiante1("jose", 20, "Zona 6");
    Estudiante estudiante2("Luis", 18, "Zona 18");
    Estudiante estudiante3("Marco", 25, "Zona 9");
    cout << "Mi primer ";
    estudiante1.mostrarInfo();

    cout << "Mi segundo ";
    estudiante2.mostrarInfo();

    cout << "Mi tercer ";
    estudiante3.mostrarInfo();

    estudiante1.saludar();
    cout << "Luis Hola a todos" << endl;
    estudiante3.saludar();

    return 0;
}

