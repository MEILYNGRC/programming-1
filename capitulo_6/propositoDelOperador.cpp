class MiClase {
public:
    static int valor;
};

int MiClase::valor = 10;

int main() {
    // Usando el operador de resoluci�n de �mbito para acceder al miembro est�tico
    std::cout << MiClase::valor << std::endl;
    return 0;
}

